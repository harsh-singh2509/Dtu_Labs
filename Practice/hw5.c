#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if(num >= 1)
    {
        printf("Its a natural number.");
    }
    else
    {
        printf("Its not a natural number.");
    }
    return 0;
}