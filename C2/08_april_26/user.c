#include<stdio.h>
int main (){
    int i, arr[3];

    for (i=0;i<=3;i++){
        // printf("Enter first no. :");
        // scanf("%d", &arr[1]);

        // printf("Enter second no. :");
        // scanf("%d", &arr[2]);

        // printf("Enter third no. :");
        // scanf("%d", &arr[3]);

         for (i=0;i<3;i++){
        printf("Enter %d index  no. :",i);
        scanf("%d", &arr[i]);
    }
    }

    for ( i = 0; i <= 3; i++)
    {
       printf("%d ",arr[i]);
    }
    
}