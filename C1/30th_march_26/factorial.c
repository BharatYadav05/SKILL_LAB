#include <stdio.h>

int main()
{
    int i, n, s = 1;

    printf("Enter the n No. :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = i * s;
    }
    printf("Factorial of %d is %d", n, s);

    return 2;
}