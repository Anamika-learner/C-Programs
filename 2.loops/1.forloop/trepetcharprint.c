// if input num is 5:
// A
// A A
// A A A
// A A A A
// A A A A A
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("A ");
        }
        printf("\n");
    }
   return 0;
}