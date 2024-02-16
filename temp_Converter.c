//
// Created by humph on 2/16/2024.
//This is a basic temparature converter.
//

#include <stdio.h>

int main(){
    int choice;
    double temp;
    printf("Enter 1 if temparature is in Celcius and 2 if in Farenheit: ");
    scanf("%d",&choice);



    if (choice == 1){
        printf("Enter temp in Celcius: ");
        scanf("%d",&temp);
        printf("Result is: %f",((9/5)*temp)-32);
    } else if(choice == 2){
        printf("Enter temp in Farenheit: ");
        scanf("%d",&temp);
        printf(" Temp in Celcius is: %f",(5/9)*(temp-32));
    } else {
        printf("Wrong choice entered.");
    }
    return 0;
}
