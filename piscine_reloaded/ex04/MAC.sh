#!/bin/sh
ifconfig | grep -i "ether" | grep -v  "media" | rev | cut -d' ' -f -2 | rev | cut -d' ' -f 1
