#include <stdio.h>

    int squ(int x)
    {

        return x * x;
    }

    int main()
    {
        int a,i;

        printf("Enter any no. :");
        scanf("%d", &a);

        i=squ(a);

        printf("The square of %d is %d .", a, i);
    
    return 0;
    }