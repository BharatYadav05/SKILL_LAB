#include <stdio.h>
int main()
{
    int mat1[2][3] = {}, mat2[2][3] = {}, mat3[2][3] = {};

    printf("Enter the Elements of First Matrix :\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element[%d][%d] :", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n\n");

    for (int p = 0; p < 2; p++)
    {
        for (int q = 0; q < 3; q++)
        {
            printf("%d ", mat1[p][q]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Enter the Elements of First Matrix :\n\n");

    for (int p = 0; p < 2; p++)
    {
        for (int q = 0; q < 3; q++)
        {
            printf("Element[%d][%d] :", p, q);
            scanf("%d", &mat2[p][q]);
        }
    }
    printf("\n\n");

    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d ", mat2[x][y]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            mat3[a][b] = mat1[a][b] + mat2[a][b];
        }
    }
    printf("\n\n");

    printf("The Resultant Matrix is :\n\n");

    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            printf("%d \t", mat3[a][b]);
        }
        printf("\n");
    }

    return 0;
}