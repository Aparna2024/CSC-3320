# !/bin/bash

#Aparna Mandapaka
#amandapaka2@student.gsu.edu
#Panther ID: 002553239
#Program name: Simple calculator

bool=true
while $bool;do
echo "Enter The first number: "
read a
echo "Enter The second number: "
read b
  
# Provide Operation Input #
echo "Enter Your Choice Of Operation:"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Modulus "
read ch
case $ch in
  1)res=`echo $a + $b | bc`
  ;;
  2)res=`echo $a - $b | bc`
  ;;
  3)res=`echo $a \* $b | bc`
  ;;
  4)res=`echo "scale=2; $a / $b" | bc`
  ;; 
  5)res=`echo "scale=2; $a % $b" | bc`
esac
echo "Result : $res"
echo "6) Clear and Continue"
echo "7) cancel"
read ch1
case $ch1 in
6)clear
continue
;;
7)esac
break
done