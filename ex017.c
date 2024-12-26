/*Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40*/

#include<stdio.h>
int main(){

int seconds;
printf("Input seconds:");
scanf("%d",&seconds);

int hour=seconds/3600;
int min=(seconds%3600)/60;
int sec=seconds-(hour*3600)-(min*60);

printf("There are:\nH:M:S-%d:%d:%d",hour,min,sec);

return 0;





}