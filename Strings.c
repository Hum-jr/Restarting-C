//
// Created by humph on 2/16/2024.
//

#include <stdio.h>
#include <string.h>

int main(){
    char name[40];
    printf("Enter the name: ");
    scanf("%39s",name);

    char surname[]="Nyangiye";

    printf("Name is: %s ",name);
    strcpy(surname,name); //Copying strings in C

    strcat(name,surname); //Concanating strings in C

    printf("Name is: %s ",name);


    printf("Length of string is: %d Size is: %d", strlen(name),sizeof(name));//String lemgth and size functions
    return 0;
}
