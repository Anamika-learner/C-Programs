// Enter the number of rows: 4
// 1
// * *
// 1 2 3
// * * * *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j=1; j<=i; j++)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
