#include <stdio.h>

int main()
{
    int i, add=0, sum[5] = {5, 10, 20, 25, 30};

    for (i = 0; i <= 5; i++)
    { 
        add = add+sum[i];
        // add = add + i;
       

        
    }
    printf("Sum = %d", add);
}