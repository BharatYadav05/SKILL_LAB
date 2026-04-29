#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age :");
    scanf("%d", &age);

    switch (age)
    {
    case (18):
        printf("You are eligible for voting !");
        break;
    case (60):
        printf("You are senior citizen !");
        break;
    default:
        printf("You are NOT eligible for voting !");
        break;
    }
}