#!/bin/sh
ifconfig -a | grep ether | grep -v media | cut -f 2 -d ' '