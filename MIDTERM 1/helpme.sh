#!/bin/bash

#Aparna Mandapaka
#amandapaka2@student.gsu.edu
#Panther ID: 002553239
#Program name: Helpme.sh using 10 favorite unix commands 

echo Enter the command you want to search
read com \c
x=1
condition="$(grep -i ^$com\( mandatabase.txt | wc -l)"
if [ $condition -ge $x ]
then 

n="0"
while read line; do
if [[ $line == ${com^^}"("* ]]
then 
 echo "$line"
 n="1"
elif [[ "$n" -eq "1" && $line != *${com^^}"(1)" ]]
then
 echo"$line"
elif [[ "$n" -eq "1" && $line == *${com^^}"(1)" ]]
then
 echo "$line"
 n="0"
fi
done < mandatabase.txt
else
  echo "sorry, I cannot help you"
fi