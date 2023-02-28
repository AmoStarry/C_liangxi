#include <stdio.h>
#include <windows.h>
int main()
{
    int i ,j ,a[] [2]={3,4,5,6};
    for(i=0;i<2;i++)
        for(j=i;j<2;j++)
            printf("%d",a[i][j]);
    printf("\n");
    printf("%d,%d",i,j);
    printf("\n");
     system("pause");
        
}