//
// Created by humph on 2/19/2024.
//

//Functions allow for code reuse

#include <stdio.h>

void swap(int *a,int *b){

    //Dereferencing pointers
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(void){
    int x=10;
    int y=20;

    printf("Initial values: \n x = %d and y = %d",x,y);
    swap(&x,&y);
    printf("\nValues after swapping: \n x = %d; y = %d \n",x,y);
    return 0;
}


