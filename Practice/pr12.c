#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the letter:");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The letter is upper case.\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("The letter is lower case.\n");
    }
    else
    {
        printf("Its not a letter.\n");
    }
    return 0;
}