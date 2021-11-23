#include <stdio.h>
#include <string.h>

void scorebylength(char *input);

int main(){

         char ch[100]; //holds the values entered by user 
 printf("Enter the password\n");
          scanf("%s", &ch); //stores the user given input in “ch” variable


 scorebylength(&ch);//checks the length of the password

 return 0;
}

void scorebylength(char *input){
        int leng = strlen(input);//calculates and checks the length of the password provided 

        int points_score = 5*(10-leng);//takes off 5 points for every character length that is great
er than 10

        if(points_score > 30){ //checks the deducation is greater than 30, if it is then it displays
 the below message 
 printf("The deduction is %d points. The password is unsafe! Please reset.\n", points_score);
        }else{ //if the deducation is not greater than 30, then it displays that the password is saf
e

if(points_score < 0){ //it resets the deduction points to 0
 points_score = 0;
     }

printf("The deduction is %d points. The password is safe.\n", points_score);
        }
}
