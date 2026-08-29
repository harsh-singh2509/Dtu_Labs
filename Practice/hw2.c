#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);
    (ch >= '0' && ch <= '9')?printf("The character is a digit."):printf("The charater is not a digit.");
    return 0;
}