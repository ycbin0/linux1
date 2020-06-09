#!/bin/bash
while echo "请输入科目成绩：";do
 read number
 if [ $number -ge 0 ] && [ $number -le 100 ]
 then
  echo "输出成绩是"
  echo "$number"
 exit
 else
  echo "$number为不合法的成绩！请重新输入："
 fi
done

