//
// Created by humph on 2/16/2024.
//

#include <stdio.h>
#include <string.h>

int main(){
    //creating string variables
    //Strings are represented in C as contigous char variables
    char name[40];
    printf("Enter the name: ");
    scanf("%39s",name);

    char surname[]="Nyangiye";

    printf("Name is: %s ",name);
    strcpy(surname,name); //Copying strings in C

    strcat(name,surname); //Concanating strings in C

    //There are safe string copy and concatenation functions that uses an extra variable to allocate memory

    strcpy_s(surname,sizeof(name),name);

    printf("Name is: %s ",name);


    printf("Length of string is: %d Size is: %d", strlen(name),sizeof(name));//String lemgth and size functions

    //Encoding international text
    //Some texts in international texts take more than a single  character.

    return 0;
}
