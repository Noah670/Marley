#include <stdio.h>

// Simple C program to find the square of a number inputted by the user

int main()
{
    printf("Hey what's up my friend?\n");
    printf("yo I heard you need help finding the square of a number \n");

    int input;
    int close;

    printf("Please tell me the number you need to square? \n");
    scanf("%d", &input);
    int increase = input * input;
    printf("The square of your number is: %d\n", increase);
    printf("see ya later!");
    scanf("%d", &close);
    return 0;


}


