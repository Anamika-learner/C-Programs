// 10 8 6 4 2 
// 10 8 6 4
// 10 8 6
// 10 8
// 10
#include<stdio.h>
int main()
{
    for(int i=5;i<=10;i++)
    {
        for(int j=10;j>=i*2-8;j=j-2)//2
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}