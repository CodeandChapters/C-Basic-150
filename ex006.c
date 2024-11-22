/*Write a C program to compute the perimeter and area of a circle with a given radius.*/

#include<stdio.h>

float PI=3.1416;

int main(){

float radius;
printf("Enter the radius:");
scanf("%f",&radius);

float perimeter=2*PI*radius;
float area=radius*radius;

printf("Perimeter of the circle:%f inches\n",perimeter);
printf("Area of the circle:%f square inches",area);

return 0;

}