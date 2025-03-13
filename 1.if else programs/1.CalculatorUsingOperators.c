#include <stdio.h>
int main()
{
    int a, b, total;
    char op;

    printf("Enter the value of a = ");
    scanf("%d", &a);

    printf("\nEnter the value of b = ");
    scanf("%d", &b);

    printf("\nEnter any arithmetic operator (+, -, *, /) =");
    scanf(" %c", &op);

    if (op == '+')
    {
        total = a + b;
        printf("the addition are = %d", total);
    }

    if (op == '-')
    {
        total = a - b;
        printf("the subtraction are = %d", total);
    }

    if (op == '*')
    {
        total = a * b;
        printf("the multiplication are = %d", total);
    }

    if (op == '/')
    {
        total = a / b;
        printf("the division are = %d", total);
    }

    return 0;
}
