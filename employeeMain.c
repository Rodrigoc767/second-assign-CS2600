//gcc employeeMain.c employeeTable.c employeeOne.c

#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

int main(void){

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);


    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; //declaration

    matchPtr = searchEmployeeByNumber(EmployeeTable,EmployeeTableEntries, 1045);
    //ex not found
    if(matchPtr != NULL)
        printf("\nEmployee ID 1045 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("\nEmployee ID 1045 is NOT found in the record\n");

    //Example Found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

     //example FOUND for phone number
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1215");
    if(matchPtr != NULL)
        printf("Employee phone number \"310-555-1215\" is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number \"310-555-1215\" is NOT found in the record\n");

    //example NOT found for phone number
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "562-555-5158");
    if(matchPtr != NULL)
        printf("Employee phone number \"562-555-5158\" is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number \"562-555-5158\" is NOT found in the record\n");

    //Example FOUND for salary
    matchPtr = searchEmployeeBySalary(EmployeeTable,EmployeeTableEntries, 8.32);
    if(matchPtr != NULL)
        printf("Employee Salary $8.32 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary $8.32 is NOT found in the record\n");

    //Example NOT found for salary
    matchPtr = searchEmployeeBySalary(EmployeeTable,EmployeeTableEntries, 2.15);
    if(matchPtr != NULL)
        printf("Employee Salary $2.15 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary $2.15 is NOT found in the record\n");
    


    return EXIT_SUCCESS;
}