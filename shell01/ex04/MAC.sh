#!/bin/sh
ifconfig | grep 'ether' | sed 's/.\ether//' | sed 's/ //g'
