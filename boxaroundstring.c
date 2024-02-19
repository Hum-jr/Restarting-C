//
// Created by humph on 2/19/2024.
//

#include <stdio.h>
#include <string.h>

int main(){
    char name[9]="Hamphrey";


    for (int i = 0; i < strlen(name) +2; ++i) {
        putchar('*');
    }
    printf("*%s*\n",name);
    putchar('\n');

    //continue,break and goto are used to manipulate control flow in a program

    return 0;
}
