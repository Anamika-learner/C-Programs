// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include <stdio.h>
int main()
{
    int a = 1;
    int n = 5;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 1;
        }
        printf("\n");
    }
    return 0;
}