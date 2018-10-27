#!/bin/bash
if [ -e "$1" ]
then
	rm -vf ./${1}.out
	g++ -g -std=c++11 $1 -o ${1}.out && ./${1}.out < test.txt
else
	echo "Need argument"
fi