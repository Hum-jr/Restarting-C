#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdint.h>
#include <time.h>
#include <stdbool.h>
#include <locale.h>

struct employee {
    uint8_t employeeNr;
    char name[50];
    float salary;
    int age:7;
    struct tm dob;
};

const char companyName[100] = "Singularsight";

void readEmployee(struct employee *employees,int nEmployees);
void printEmployees(struct employee employees[50], int nEmployees);

int main(int argc, char *argv[]){
    struct employee employees[100];
    int nEmployees;

    printf("Welcome to the employee System of: %s \n",companyName);
    printf("Please provide the number of employees you want to import: ");
    scanf("%d",&nEmployees);

    readEmployee(employees,nEmployees);
    printEmployees(employees,nEmployees);

    exit(0);
}

void readEmployee(struct employee *employees,int nEmployees){
    for (int i=0;i<nEmployees;i++){
        printf("Processing Employee number: %d", i+1);
        printf("Please provide the employee name, number, salary and DOB (dd/mm/yyyy): ");

        char empName[200];
        int dayDob,monthDob,yearDob;
        scanf("%s %d %f %d/%d/%d",empName, &employees[i].employeeNr,&employees->salary,&dayDob,&monthDob,&yearDob);

        strcpy(employees[i].name,empName);


        struct tm dobObj;

        dobObj.tm_yday = dayDob;
        dobObj.tm_mon = monthDob;
        dobObj.tm_year= yearDob - 1900;

        time_t currTimeSec;

    }


}

void printEmployees(struct employee employees[100],int nEmployees){
    printf("\n");
    setlocale(LC_ALL, "");
    struct lconv * currentLocale =  localeconv();

    printf("Printing employees list:\n");

    for (int i=0; i<nEmployees; i++){
        struct employee emp= employees[i];
        printf("Name: %s Employee Nr: %d Salary: %.2f%s DOB:%02d/%02d/%d Age: %d\n",emp.name, emp.employeeNr, emp.salary, currentLocale -> int_curr_symbol
        ,emp.dob.tm_yday, emp.dob.tm_mon, emp.dob.tm_year+1900, emp.age);
    }
}
