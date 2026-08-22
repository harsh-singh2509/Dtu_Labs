#include <stdio.h>

int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    //DONOT forget the comma after "" and give spaces btw declared variables and operators
    printf("%d", x % 3 == 0);
    return 0;
}