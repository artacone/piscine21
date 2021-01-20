#!/bin/sh
find . -name "*.sh" -type f | sed -e 's?.*/??; s?\.sh??' 
