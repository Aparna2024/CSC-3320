#include <stdio.h>
#include <string.h>

int main()
{

        char input[20]; //in this the character holds the input message 
        printf("Enter Palindrome : "); //tells the user to enter the input
        scanf("%s", input);
        int LefttoRight = 0; //this starts reading from left to right
        int RighttoLeft = strlen(input) - 1; //this starts reading from right to left

        while (RighttoLeft > LefttoRight)
        {
                if(input[LefttoRight++] != input[RighttoLeft--]) //checks from Left to Right, if it doesn't match the palindrome 
        {
                printf("%s is not a Palindrome", input);
                break; //if it doesn't match with the Palindrome, then the program breaks 
        }
        else {
                printf("%s is a Palindrome", input);
        break; // if it matches with the Palindrome then it breaks too
        }
    }
        return 0; //if the character is different, then 0 is returned, stating that the input is not in the palindrome
}

