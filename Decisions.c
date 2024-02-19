//
// Created by humph on 2/19/2024.
//

//If statements
#include <stdio.h>
#include <string.h>

int main(){
    char password[20];
    printf("Enter any Password: ");
    scanf("%19s",&password);

    //the strcmp compares two strings
    if(strcmp(password,"Pluralsight")==0)
        printf("Correct password");
    else
        printf("Wrong password");
    return 0;
}
