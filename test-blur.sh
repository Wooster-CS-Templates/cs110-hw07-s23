#! /bin/bash

if ! [[ -x blur ]]; then
    echo "program blur executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-blur
