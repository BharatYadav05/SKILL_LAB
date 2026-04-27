#include <stdio.h>
int main()
{
    int arr[5] = {23, 21, 56, 76, 45};
    int max = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > arr[0])
        {
            arr[0] = max;
        }
    }

    printf("Max element is %d", arr[0]);

    return 0;
}