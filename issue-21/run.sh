#!/bin/bash

dir=$(dirname $(readlink -ef $0))

cd $dir

../validate -v domain.pddl p01.pddl p01.plan
