//5 10 15 20
//5 10 15 
//5 10
//5
#include <stdio.h>
int main()
{
    for (int i=4; i>0; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d ",j*5);
        }
        printf("\n");
    }
    return 0;
}
