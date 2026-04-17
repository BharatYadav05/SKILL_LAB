#include <stdio.h>
int main()
{
    
 int a,b,i;

printf("Enter 1st number :");
    scanf("%d", &a);

    printf("Enter 2nd number :");
    scanf("%d", &b);

    for(i=1;i<=b;i++){
        a--;
    }
    // b=b+a;
printf("%d", b);
return 0;
}