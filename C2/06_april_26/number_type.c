// write a program to read a no. and check it is +ve , -ve and 0

#include<stdio.h>

int main(){
    int a;

    printf("Enter any number :");
    scanf("%d", &a);

    if (a>=1){
        printf("%d is Positive no.",a);
    }
    else if(a<1 && a!=0){
        printf("%d is Negative no.",a);
    }
    else{
        printf(" Entered no. is %d (Zero)",a);
    }

    return 0;
}