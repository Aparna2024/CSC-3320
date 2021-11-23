#include <stdio.h>
#include <string.h>

int swap(char *message1, char *message2);
int main(){
 char input1[200];//stores the characters of array from the first input
 char input2[200];//stores the characters of array from the second input
  printf("Enter sentence 1\n");//asks the user to enter the first sentence
   gets(input1); //reads the input provided by the user 
 printf("Enter sentence 2\n"); //asks user type in second sentence 
  gets(input2);//reads the second input provided by the user 
 swap(&input1, &input2); //this calls the swap method to swap the strings 
 return 0;
}

 int swap(char *message1, char *message2){//this is the swap method with two pointers 
 int len1 = strlen(message1); //this finds the length of the first sentence provided by the user 
int len2 = strlen(message2); //this finds the length of the second sentence provided by the user 
 printf("Inital string values of sentence 1 and 2: %s \t %s\n", message1, message2);//displays two strings to the user 
if(len1 != len2){
                printf("The messages are not of equal length.\n");
                return 0;
        }
  strcat(message1, message2);//adds both input 1 and 2 and combines into one sentence 
 strncpy(message2, message1, len2);//copies the largest input and adds it to the other input
  printf("Final values of strings 1 and 2: %s \t %s\n", message1+len2, message2); //prints the strings after it has swapped it

                return 0;
}

