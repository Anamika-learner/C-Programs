// Enter a charecter = d
// a
// a b
// a b c
// a b c d
#include <stdio.h>
int main()
{
    int i, j;
    char ch;
    printf("Enter a charecter = ");
    scanf("%c", &ch);
    for (i = 'a'; i <= ch; i++)
    {
        for (j = 'a'; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}
