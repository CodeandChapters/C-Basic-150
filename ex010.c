/*Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.*/



#include<stdio.h>

int main(){

int weight01,weight02,no_item1,no_item2;

printf("Weight of Item-1:");
scanf("%d",&weight01);

printf("Weight of Item-2:");
scanf("%d",&weight02);

printf("No. of Item-1:");
scanf("%d",&no_item1);

printf("No. of Item-2:");
scanf("%d",&no_item2);

float average=(weight01*no_item1)+(weight02*no_item2)/2;

printf("Average:%f",average);

return 0;






}