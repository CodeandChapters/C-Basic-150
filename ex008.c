/*Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3*/

#include<stdio.h>

int main(){

int years,weeks,rdays,days;

days=1329;

years=(days/365);

weeks=((days%365)/7);

rdays=(days-(years*365)-(weeks*7));

printf("Years:%d\n",years);
printf("Weeks:%d\n",weeks);
printf("Days:%d",rdays);

return 0;


}