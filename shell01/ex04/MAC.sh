#!/bin/sh
ifconfig | grep -w ether | cut -c8- | sed 's/ //g'
