#!/bin/bash
while echo "请输入学号";do
 read name
 if [[ $name =~ ^2[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]$ ]];then
  echo "符合规范"
  echo $name
 exit
 else
  echo "不符合规范"
 fi
done
