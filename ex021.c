/*
Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
Test Data :
Input an integer: 15
Expected Output:
Range [0, 20]
*/
#include <stdio.h>
int main()
{
    int inum;
    printf("Enter an integer:");
    scanf("%d", &inum);

    if (inum < 0 || inum > 80)
    {

        printf("Invalid Input");
        return 1;
    }
    else if (inum >= 0 && inum <= 20)
    {
        printf("Range[0,20]");
    }
    else if (inum > 20 && inum <= 40)
    {
        printf("Range[21,40]");
    }
    else if (inum > 40 && inum <= 60)
    {
        printf("Range[41,60]");
    }
    else if (inum > 60 && inum <= 80)
    {
        printf("Range[61,80]");
    }

    return 0;
}