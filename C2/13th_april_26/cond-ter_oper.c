#include<stdio.h>
int main(){

int n1,n2,max;

printf("Enter first no. :");
scanf("%d", &n1);

printf("Enter second no. :");
scanf("%d", &n2);

max=(n1>n2) ? n1 :n2 ;

printf("Greatest no. is %d", max);

return 0;
}