
#include <stdio.h>
int main()
{
    int mat1[3][3] = {};

    printf("Enter the Elements of Matrix :\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element[%d][%d] :", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d ", mat1[x][y]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Transpose Matrix:\n");

    for (int p = 0; p < 3; p++)
    {
        for (int q = 0; q < 3; q++)
        {
            printf("%d ", mat1[q][p]);
        }
        printf("\n");
    }
}
