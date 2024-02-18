//
// Created by humph on 2/16/2024.
//

#include <stdio.h>
#include <strings.h>

int main(){
    char name[40];
    printf("Enter the name: ");
    scanf("%39s",name);

    char surname[]="Nyangiye";

    printf("Name is: %s ",name);
    strcpy(surname,name);

    strcat(name,surname);

    printf("Name is: %s ",name);
    return 0;
}
