/*Write a C program that accepts two integers from the user and calculates the product of the two integers.*/

#include<stdio.h>

int main(){

int num1,num2;

printf("Enter the first integar:");
scanf("%d",&num1);

printf("Enter the second integar:");
scanf("%d",&num2);

int product=num1*num2;

printf("Product:%d",product);


return 0;


}