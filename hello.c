# include<stdio.h>

int main() {
    int x;
    printf("Whats the first number? ");
    scanf("%d", &x);
    int y;
    printf("Whats the second number? ");
    scanf("%d", &y);
    printf("The product of the two numbers is: %d", x * y);
    return 0;
}