#!/bin/bash
#Name: helpme.sh
#Aparna Mandapaka
#amandapaka2@student.gsu.edu
#Panther ID: 002553239
#Program name: Finding the statements on Wikipedia page

x=1
counter="0"

echo "enter the command you want to be searched"
read searched \c
match_condition="$(grep -i ^$searched\( mandatabase.txt | wc -l)"
if [ $match_condition -ge $x ]
then

while read ln; do
  if [[ $ln == ${searched^^}"("* ]]
  then
    echo "$ln"
    counter="1"
elif [[ "$counter" -eq "1" && $ln == *${searched^^}"(1)" ]]
then
  echo "$ln"
  counter="0"
elif [[ "$counter" -eq "1" && $ln != *${searched^^}"(1)" ]]
then
  echo "$ln"
fi

done < mandatabase.txt

else
        echo "sorry, I cannot help you"
fi