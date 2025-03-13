#include <stdio.h>
int main()
{
    char ch;
    printf("Enter charecter = ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\n Upper case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\n Lower case");
    }
    else
    {
        printf("Not an english letter");
    }
    return 0;
}
