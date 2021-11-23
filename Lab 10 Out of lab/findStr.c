#include <stdio.h>
#include <string.h>
int main() {
  
  
 	char input[22];
	char shortest[22];
	char longest[22];

	printf("Enter word: ");
	scanf("%s", input);

	strcpy(shortest, input);
	strcpy(longest, input);

	while(strlen(input) != 4) {
	   
	   if(strcmp(input, longest) > 0)
            {
		
		strcpy(longest, input);

         }
	 else if(strcmp(input, shortest) < 0)
	 {

	    strcpy(shortest, input);
	  }

	printf("Enter word: ");

	scanf("%s", input);

 	}

  	printf("Smallest word: %s\n", shortest);

	printf("Largest word: %s\n", longest);

	return 0;
  }