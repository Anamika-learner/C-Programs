// (0,0) (0,1) (0,2)
// (1,0) (1,1) (1,2)
// (2,0) (2,1) (2,2)
#include <stdio.h>
int main()
{
    int rows = 3;
    int cols = 3;
    for (int i=0; i<rows; i++)
    { 
        for (int j=0; j<cols; j++)
        {
            printf("(%d,%d) ",i,j); 
        }
        printf("\n"); 
    }
    return 0;
}
