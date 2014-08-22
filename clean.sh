#! /bin/bash

find -name '*.o' -exec rm {} \;
find -name '*.pyc' -exec rm {} \;
find -name '*.swp' -exec rm {} \;
find -name '*.sim' -exec rm {} \;
