#include <stdio.h>
int main()
{
    int arry[5] = {};
    int sum = 0, i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter 5 numbers: ");
    }

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arry[i]);
        sum = sum + arry[i];
    }

    printf("Sum of array elements: %d", sum);
    return 0;
}