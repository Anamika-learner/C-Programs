#include <stdio.h>
int main()
{
    int no;
    printf("Enter number = ");
    scanf("%d", &no);
    if (no >= 0)
    {
        printf("Positive");
        if (no % 2 == 0)
        {
            printf("\nEven");
        }
        else
        {
            printf("\nOdd");
        }
    }
    else
    {
        printf("Nagative");
    }
   return 0;
}