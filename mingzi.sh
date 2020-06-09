#!/bin/bash
while echo "请输入名字："; do
 read name
 if [[ "$name" =~ [0-9] ]]
 then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~ [a-z] ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~ [A-Z] ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  。 ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  ， ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  ！ ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  ？ ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  ； ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  ‘ ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  ： ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  、 ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  “ ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  ” ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  ’ ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  / ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  * ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  + ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  - ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  = ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  @ ]];then
  echo "输入名字格式不正确！"
 elif [[ "$name" =~  % ]];then
  echo "输入名字格式不正确！"
 else
  echo "输入名字格式正确！"
  echo $name
exit
fi
done

