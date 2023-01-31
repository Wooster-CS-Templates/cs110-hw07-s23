#! /bin/bash

if ! [[ -x transpose ]]; then
    echo "program transpose executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-transpose
