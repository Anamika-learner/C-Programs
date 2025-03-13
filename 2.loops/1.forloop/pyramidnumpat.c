// if user input num 5:
//       1
//      121
//     12321
//    1234321
//   123454321
#include <stdio.h>
int main()
{
    int i,j,s,no;
    printf("Enter the any number = ");
    scanf("%d", &no);
    for (i=1; i<=no; i++)
    {
        for (s=no; s>=i; s--)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for (j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}