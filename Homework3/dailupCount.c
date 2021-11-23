#include <stdio.h>

struct dialing_code{

 char *country; //holds the name of the country
         int code;//holds the code of the country 
};

const struct dialing_code country_code[] = {
                {"Argentina", 54}, {"Brazil", 55}, {"Germany", 49}, {"Bangladesh", 880},
                {"India", 91}, {"Indonesia", 62}, {"Russia", 7}, {"Iran", 98},
                {"China", 86}, {"Ehiopia", 251}, {"France", 33}, {"Colombia", 57},
                {"Italy", 39}, {"South Africa", 27}, {"United Kingdom", 44}, {"South Korea", 82},
                {"United States", 1}, {"Poland", 48}, {"Turkey", 90}, {"Mexico", 52}, {"Philippines", 63}};
int ind_ext(int *code1);
        int main(){
        int con_code; //this holds the input of the country code by user 
        printf("Enter the code of the country's phone numbers.\n"); //asks the user to enter the country code
        scanf("%d", &con_code);
         if(ind_ext(&con_code)){
           printf("The country is %s.\n", country_code[ind_ext(&con_code)-1].country);//prints the code and the country 
        }else{
         printf("The country was not found in this directory!\n");
        }
        return 0;
        }

int ind_ext(int *code1){
        int i; //keeps track of the index 
         int comp = *code1;//this assigns the value of the pointer to the other integer
         for(i = 0; i < 21; i++){
          if(country_code[i].code == comp){ //checks if the country code matches the index 
         return(i+1);
                }
        }
        return 0;
}


