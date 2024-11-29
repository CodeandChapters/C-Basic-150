/*Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00*/

#include<stdio.h>
int main(){

char id[10];
int hours;
double value,salary;

printf("Input the Employees ID(Max 10 chars):");
scanf("%s",&id);

printf("Input the working hours:");
scanf("%d",&hours);

printf("Salary amout/hr:");
scanf("%lf",&value);

salary=value*hours;

printf("Employees ID:%s\nSalary:U$%.2lf",id,salary);

return 0;






}