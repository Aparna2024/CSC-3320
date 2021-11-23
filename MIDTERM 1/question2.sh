#!/bin/bash

#Aparna Mandapaka
#amandapaka2@student.gsu.edu
#Panther ID: 002553239
#Program name: Finding statements on Wikipedia page 

function fnd_statements() {
        # Initialize array index counter
        i=0

        while CLT=. read -r -a line
        do
        CLT="."

                for stat in ${line[@]}
                do

                        statements[i]=$(echo $stat | sed 's/^ //g')
                        # Increment counter
                        i=$((i+1))
                done
        done < $1

        # Display the table header
        echo -e "\t\tWords\tletters"
        # Initilize the array counter
        i=1


        for statement in ${statements[@]}
        do
                # Count number of words and letters
                words=$(echo $statement | wc -w)
                letters=$(echo $statement | tr -d ' ' | wc -c)
                # Display the words and letters count
                echo -e "Statement $i:\t  $words\t  $((letters-1))"

                i=$((i+1))
        done
}

# Check if argument is passed
if(($#==1))
then
        # Then, set file to $1
        file=$1
else
        # Else, prompt the user for a file
        echo -n "Text file: "
        read file
fi

# Check if the file exists
if [ -f $file ]
then
        # Then, call the function
        fnd_statements $file
else
        # Else, display error and exit
        echo "$file: file not exist"
        exit 1
fi
~             