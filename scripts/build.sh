#!/bin/bash

BASH=`which bash`

remove_image()
{
  DOCKER_REMOVE_COMMAND="$BASH $BUILD_SOURCESDIRECTORY/scripts/build/remove-docker-image.sh $buildDockerImageTag"
  echo $DOCKER_REMOVE_COMMAND
  $DOCKER_REMOVE_COMMAND
}

if [ "$#" -eq 0 ]; then
    buildDockerImageFolder="$BUILD_SOURCESDIRECTORY/scripts/build/docker"
else
    echo "Usage:"
    echo "- $0"
    echo "- $0 <BUILD_DOCKER_IMAGE_FOLDER>"
    exit 1
fi

echo "Start build:"
echo "Branch: $BUILD_SOURCEBRANCH"

buildDockerImageTag="$BUILD_REPOSITORY_NAME:$BUILD_BUILDNUMBER"

echo "Create the docker container image for building."
DOCKER_BUILD_COMMAND="$BASH $BUILD_SOURCESDIRECTORY/scripts/build/create-docker-image.sh $buildDockerImageFolder $buildDockerImageTag"
echo $DOCKER_BUILD_COMMAND
$DOCKER_BUILD_COMMAND
buildDockerStatus=$?
if [ $buildDockerStatus -ne 0 ]; then 
  echo "Creation of the docker container image for building failed."
  exit $buildDockerStatus
else
  echo "Creation of the docker container image for building successful."
fi

echo "Clean using the docker image."
COMMAND="$BASH $BUILD_SOURCESDIRECTORY/scripts/build/run-docker-image.sh $buildDockerImageTag /bin/bash ./scripts/linux/clean.sh"
echo $COMMAND
$COMMAND
cleanStatus=$?
if [ $cleanStatus -ne 0 ]; then 
  echo "Clean using the docker image failed."
  remove_image
  exit $cleanStatus
else
  echo "Clean using the docker image successful."
fi

echo "Create documentation using the docker image."
COMMAND="$BASH $BUILD_SOURCESDIRECTORY/scripts/build/run-docker-image.sh $buildDockerImageTag /bin/bash ./scripts/linux/documentation.sh"
echo $COMMAND
$COMMAND
documentationStatus=$?
if [ $documentationStatus -ne 0 ]; then 
  echo "Create documentation using the docker image failed."
  remove_image
  exit $documentationStatus
else
  echo "Create documentation using the docker image successful."
fi

echo "Build using the docker image."
COMMAND="$BASH $BUILD_SOURCESDIRECTORY/scripts/build/run-docker-image.sh $buildDockerImageTag /bin/bash ./scripts/linux/build.sh all Release"
echo $COMMAND
$COMMAND
buildStatus=$?
if [ $buildStatus -ne 0 ]; then 
  echo "Build using the docker image failed."
  remove_image
  exit $buildStatus
else
  echo "Build using the docker image successful."
fi

remove_image
