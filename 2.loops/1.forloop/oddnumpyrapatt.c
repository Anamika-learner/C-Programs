// enter a number=5
// 1
// 1 3
// 1 3 5
// 1 3 5 7
// 1 3 5 7 9
#include <stdio.h>
int main()
{
    int no;
    printf("Enter a number = ");
    scanf("%d", &no);
    for (int i=1; i<=no; i++)
    {
        for (int j=1; j<=2*i; j=j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}