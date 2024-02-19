//
// Created by humph on 2/19/2024.
//

//If statements
#include <stdio.h>
#include <string.h>

int main(){
    char password[20];
    int num;
    printf("Enter any Password: ");
    scanf("%19s",&password);

    //the strcmp compares two strings
    if(strcmp(password,"Pluralsight")==0)
        printf("Correct password");
    else
        printf("Wrong password");

    //The assignment operator always returns the assigned value.
    //The below statment will alwways evaluate to true

    if(num=64){
        printf("This is true");
    }

    //putchar function is a shorthand for prinitng characters
    putchar('&');

    //For switch statments only non-iintegral types can be compared

    return 0;
}
