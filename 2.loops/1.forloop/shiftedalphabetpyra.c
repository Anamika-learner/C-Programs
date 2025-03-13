// Enter the number of rows: 4
// a b c d
// b c d e
// c d e f
// d e f g
#include <stdio.h>
int main()
{
    int n;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        ch = 'a' + i;
        for (int j = 0; j < n; j++)
        {
            printf("%c ", ch + j);
        }
        printf("\n");
    }
    return 0;
}
