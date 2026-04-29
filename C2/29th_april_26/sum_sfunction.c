#include <stdio.h>

    int sum(int x , int y); //function declaration

    int main(){
        int a, b, add;

        printf("Enter the value of a & n :");
        scanf("%d %d", &a , &b);
        add=sum(a,b); // Function calling
            //   |-Actual Parameter
        printf("%d", add); //Actual Parameter

return 0;
    }

    int sum(int x, int y) //Function Definition 
        {    //   formal parameter
            return (x+y);
        }