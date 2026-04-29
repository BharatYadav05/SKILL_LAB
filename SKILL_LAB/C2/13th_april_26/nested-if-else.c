#include <stdio.h>
int main()
{
    int age;

    printf("Enter your age :");
    scanf("%d", &age);

    if (age >= 18 & age <60)
    {
        printf("You are eligible for voting !");
    }
    else if (age >= 60) 
    {
        printf("You are senior citizen !");
    }
    else if (age >= 17 & age<18)
    {
     }
    else
    {
        printf("You are NOT eligible for voting !");
    }
}
