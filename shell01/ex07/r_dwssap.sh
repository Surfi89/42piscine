#!/bin/sh
cat /etc/passwd | sed '/#/d' | sed 's/:.*//' | sed -n 'n;p' | rev | sort -r | sed -n " $FT_LINE1 , $FT_LINE2 p " | sed 's/$/,/' | tr '\n' ' ' | sed 's:, *$:.:g' | tr -d '\n'
