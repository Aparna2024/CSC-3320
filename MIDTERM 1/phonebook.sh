#!/bin/sh

#Aparna Mandapaka
#amandapaka2@student.gsu.edu
#Panther ID: 002553239
#Program name: PhoneBook directory

BOOK="ad-bk.txt"
exit=0
while [ $exit -ne 1 ]
do
  echo "Do you want to add, list, find, delete, or exit?"
  read resp

  if [ "$resp" = "list" ]
  then
      echo "Line number:   Name ;     Phone Number;     Address ;    "
      nl  --number-separator=";   "   $BOOK
      sort -o fn.txt ad-bk.txt
      cp fn.txt ad-bk.txt
   elif [ "$resp" = "find" ]
   then
       echo -n "What person are you trying to find?"
       read fnd
       #displays the format before the entries
       echo "              Name  ;    Phone Number ;    Address  "
       grep -i $fnd $BOOK
       sort -o fn.txt ad-bk.txt
       cp fn.txt ad-bk.txt
  elif [ "$resp" = "delete" ]
  then
       echo -n "Which name should I delete: "
       read per
       sed -e "/$per/d" fn.txt | tee $BOOK
       sort -o fn.txt ad-bk.txt | cat fn.txt
       cp fn.txt ad-bk.txt
  elif [ "$resp" = "exit" ]
  then
        exit=1
  elif [ "$resp" = "add" ]
  then
        echo -n "name of person: "
        read per
        echo -n "Phone Number: "
        read phone
        echo -n "Enter the address: "
        read address
        echo "Are you sure? (y/n)"
        read res
        if [ "$res" = "y" ]
        then
            echo "$per ; $phone ; $address" >>$BOOK
        else
            echo "It has not been appended!"
        fi
        sort -o fn.txt ad-bk.txt
        cp fn.txt ad-bk.txt
else
         echo "Error in command. Try again."
fi

done
exit 0