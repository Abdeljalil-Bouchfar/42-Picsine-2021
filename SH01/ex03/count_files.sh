#!/bin/sh
find $PWD \( -type f -or -type d \) | wc -l | tr -d ' '
