// Enter the number of rows: 4
// A B C D
// A B C
// A B
// A
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i=rows; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c ",'A'+(j-1));
        }
        printf("\n");
    }
    return 0;
}
