#!/bin/bash

map_err=./tests/map-error/*

for test_file in ${map_err}
do
	printf 'testing file: %s\n' ${test_file}
	./bsq ${test_file} 1>out 2>err
	diff out /dev/null
	printf 'map error\n' | diff err -
	rm -f out err
done
