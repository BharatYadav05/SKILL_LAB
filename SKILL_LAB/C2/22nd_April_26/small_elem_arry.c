#include <stdio.h>
int main()
{
    int i, arry[5] = {1, 2, 3, 4, 5}, s = arry[0];

    for (i = 1; i < 5; i++)
    {
        if (arry[i] < arry[0])
        {
            s = arry[i];
            arry[0] = s;
        }
    }

    printf("Smallest element in the array is: %d", arry[0]);

    return 0;
}