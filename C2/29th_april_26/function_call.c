#include <stdio.h>
int fun(int x, int y);
int main()
{
    int x = 10, y = 20;

    fun(x, y);

    printf("%d %d", x, y);

    return 0;
}

int fun(int x, int y)
{
    x = 20;
    y = 10;
}