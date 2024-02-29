#include <stdio.h>
#include "addis.h"

int main(void ){
    int a,b;
    printf("Enter two numbers to add: ");
    scanf("%d %d",&a,&b);
    printf("Result is: %d", add(&a,&b));
    return 0;
}