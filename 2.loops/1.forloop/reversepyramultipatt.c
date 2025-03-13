//3 6 9 12 15
//3 6 9 12
//3 6 9
//3 6
//3
#include <stdio.h>
int main()
{  for(int i=5;i>=1;i--)
    {
        for(int j=3;j<=i*3;j=j+3)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
