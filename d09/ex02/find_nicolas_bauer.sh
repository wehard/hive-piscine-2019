#!/bin/sh
cat $1 | grep -i -E 'nicolas.*bauer' | grep -i "bauer" | grep -v -i "bomber" | grep "-"  | awk '{print$(NF-1)}'