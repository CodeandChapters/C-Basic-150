/*Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00*/

#include <stdio.h>

int main()
{

    int amount, total;

    printf("Input the amount:");
    scanf("%d", &amount);

    if (amount < 0)
    {
        printf("Input invalid.The amount must be non-negative.");
        return 1;
    }

    printf("There are:\n");

    total = amount / 100;
    printf("%d Note(s) of 100.00\n", total);
    amount = amount - (100 * total);

    total = amount / 50;
    printf("%d Note(s) of 50.00\n", total);
    amount = amount - (50 * total);

    total = amount / 20;
    printf("%d Note(s) of 20.00\n", total);
    amount = amount - (20 * total);

    total = amount / 10;
    printf("%d Note(s) of 10.00\n", total);
    amount = amount - (10 * total);

    total = amount / 5;
    printf("%d Note(s) of 5.00\n", total);
    amount = amount - (5 * total);

    total = amount / 2;
    printf("%d Note(s) of 2.00\n", total);
    amount = amount - (2 * total);

    total = amount / 1;
    printf("%d Note(s) of 1.00\n", total);
    amount = amount - (1 * total);

    return 0;
}