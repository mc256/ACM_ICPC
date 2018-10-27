#!/bin/bash
if [ -e "$1" ]
then
	g++ $1 -o ${1}.out && ./${1}.out < test.txt
else
	echo "Need argument"
fi