/*
Write a C program that reads 5 numbers and sums all odd values between them.
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 46
*/
#include <stdio.h>
int main()
{

    int a, b, c, d, e;
    int sum = 0;

    printf("Input the first number:");
    scanf("%d", &a);
    printf("Input the second number:");
    scanf("%d", &b);
    printf("Input the third number:");
    scanf("%d", &c);
    printf("Input the fourth number:");
    scanf("%d", &d);
    printf("Input the fifth number:");
    scanf("%d", &e);

    if (a % 2 != 0)
    {
        sum = sum + a;
    }
    if (b % 2 != 0)
    {
        sum = sum + b;
    }
    if (c % 2 != 0)
    {
        sum = sum + c;
    }
    if (d % 2 != 0)
    {
        sum = sum+d;
    }
    if (e % 2 != 0)
    {
        sum = sum + e;
    }
    printf("Sum of all odd numbers=%d", sum);

    return 0;
}