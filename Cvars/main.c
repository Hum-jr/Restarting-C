//Data types
//Integer

//Managing complex numbers


#include <stdio.h>
#include <string.h>


int main() {
    struct student{
        char name[10];
        char admNo[5];
        int yob;
    };

    struct student student1 = {
            "Ben","11271",2002
    };

    strcpy(student1.name,"Tom");

    printf("%s",student1.name);

    return 0;
}