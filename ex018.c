/*Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)*/
#include <stdio.h>
int main()
{

    int idays;

    printf("Input no. of days:");
    scanf("%d", &idays);

    int years = idays / 365;
    int months = (idays % 365) / 30;
    int days = idays - (years * 365) - (months * 30);

    printf("%d Year(s)\n%d Month(s)\n%d Day(s)", years, months, days);

    return 0;
}