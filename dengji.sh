#!/bin/bash
for d in $*;do
 case $* in
  100|9[0-9]) echo "优秀";; 
  [7-8][0-9]) echo "良好";; 
  6[0-9]) echo "及格";; 
  [1-5][0-9]) echo "不及格";; 
  [0-9]) echo "不及格";; 
 esac
done
