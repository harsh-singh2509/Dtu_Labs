#include <stdio.h>
int main() 
{
    float a,b,c;
    printf("Enter the first number:");
    scanf("%f", &a);
    printf("Enter the second number:");
    scanf("%f", &b);
    printf("Enter the third number:");
    scanf("%f", &c);
    printf("The average of the three numbers is: %f\n", (a+b+c)/3);
    return 0;
}