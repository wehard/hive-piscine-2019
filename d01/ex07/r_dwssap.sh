#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk 'NR%2==0' | cut -f 1 -d ':' | rev | sort -r | sed -n ""$FT_LINE1","$FT_LINE2"p" | sed 's/$/, /g' | tr -d '\n' | sed 's/, *$/./' | tr -d '\n'