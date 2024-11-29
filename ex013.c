/*Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35*/

#include<stdio.h>
#include<stdlib.h>
int main(){

int a,b,c,result,max;

printf("Input the first integer:");
scanf("%d",&a);

printf("Input the second integar:");
scanf("%d",&b);

printf("Input the third integer:");
scanf("%d",&c);

result=(a+b+abs(a-b))/2;
max=(result+c+abs(result-c))/2;

printf("Maximum value of three numbers:%d",max);

return 0;










}