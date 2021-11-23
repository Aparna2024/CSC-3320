#include <stdio.h>
#include <string.h>


void scorebylength(char *input);


int main(){
	
       char ch[100]; //holds the values entered by user 


	
       printf("Enter the password\n");
//stores the user given input in “ch” variable
       scanf("%s", &ch);
	
       scorebylength(&ch); //checks the length of the password


       return 0;


}


void scorebylength(char *input){
	
       int i, j = 0; //the i and j are initial variables 

	//Calculating the length of the user-entered password

       int leng = strlen(input); //calculates and checks the length of the password provided 

	
       int points_score = 0; //assigning the intializaing to deduct to 0

       int cap_strike = 0; //cap_strike checks if there are any capital letter in the password 
      
	int num_strike = 0; //this checks if the numbers are in the password
	
       int low_strike = 0; //this checks for lowercase alphabets 

       int comb_strike = 0;//this checks that there are not 2 more consecutive letters and numbers in password 

       for(i = 0; i < leng; i++){ //this checks for uppercase, lowercase and numbers in password 

               if((input[i]>='a' && input[i]<='z')||(isdigit(input[i]))){//checks for lowercase letter or number

			cap_strike = cap_strike + 1;
               }

		if(!(isdigit(input[i]))){ //checks if the character is not a digit 


			num_strike = num_strike + 1;
               }
		//checks if the character is upper case or number 
               if((input[i]>='A' && input[i]<='Z')||(isdigit(input[i]))){
      
			low_strike = low_strike + 1; 
               }
       }
	
       while(j <= leng-3){
		
               if(((int)input[j])+1 == (int)input[j+1] && ((int)input[j])+2 == (int)input[j+2]){
            
			comb_strike = comb_strike + 1;
               }
//increases jth index to reach other 3 characters 
               j++;
       }
	
       if(comb_strike > 0){
		
               points_score = points_score + 20;
       }
	
       if(cap_strike == leng){
		//Adding 20 points to the deducted score
               points_score = points_score + 20;
       }
	
       if(num_strike == leng){
               //Adding 20 points to the deducted score
		points_score = points_score + 20;
       }
	
       if(low_strike == leng){
		//Adding 20 points to the deducted score
               points_score = points_score + 20;
       }
       
	if(points_score > 30){
//if the points calculated is higher than 30, then it gives an error 


               printf("The deduction is %d points. The password is unsafe! Please reset.\n", points_score);
       }else{




            //if not it prints the password is safe  
 printf("The deduction is %d points. The password is safe.\n", points_score);
       }


}

