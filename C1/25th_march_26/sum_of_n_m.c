#include <stdio.h>

int main()
{
    int n, sum, m, r = 0;

    printf("Enter first no. ");
    scanf("%d", &n);

    printf("Enter second no. :");
    scanf("%d", &m);

    // for (n; n <= m; n++)
    // {
    //     r = r + n;
    // }


    // while (n<=m)
    // {
    //     r = r + n; n++;
    // }

    do
    {
        r = r + n; n++;
    } while (n<=m);
    
    
    printf("%d", r);
    return 0;
}