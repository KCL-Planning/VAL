#!/bin/bash

dir=$(dirname $(readlink -ef $0))

cd $dir

../validate -v domain.pddl problem.pddl plan
