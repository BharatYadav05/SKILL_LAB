#include <stdio.h>
int main()
{
    int marks[4][5] = {
        {23, 45, 66, 78, 90},
        {24, 56, 75, 71, 95},
        {46, 29, 64, 74, 80},
        {34, 54, 39, 68, 90}
    };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; i < 5; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}