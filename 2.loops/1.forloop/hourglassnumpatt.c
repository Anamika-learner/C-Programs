// if user input num 5:
// 5 5 5 5 5 
// 4 4 4 4  
// 3 3 3 
// 2 2 
// 1 
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5
#include <stdio.h>
int main()
{
    int i, j, no;
    printf("Enter number = ");
    scanf("%d", &no);
    for (i = no; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    for (i = 1; i <= no; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}