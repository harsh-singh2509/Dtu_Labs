# include<stdio.h>
int main()
{
    int num;
    printf("Number:");
    scanf("%d", &num);
    // There should be two == as not assigning a value but checking for equality. 
    (num % 2 == 0)?printf("%d is even.", num):printf("%d is odd.", num);
    return 0;
}