#!/bin/sh
cat /etc/passwd | grep -v '#' | awk 'NR%2==0'| awk -F ':' '{print $1}'  | rev | sort -r | tr '\n' ',' | sed 's/$/./' | cat -e
