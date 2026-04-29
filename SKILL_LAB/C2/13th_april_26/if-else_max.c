#include<stdio.h>
int main(){

int n1,n2;

printf("Enter first no. :");
scanf("%d", &n1);

printf("Enter second no. :");
scanf("%d", &n2);

if(n1>n2){
printf("Greatest no. is %d", n1);

}
    else{
   printf("Greatest no. is %d", n2);  
    }
   
return 0;
}