#include <stdio.h>
#include <windows.h>
int main()
{
    unsigned int i;
    for (i=0 ; i<=25 ; i++)
    {
        printf("%d%c ",i,i);
        if(i%10 ==0)
        printf("\n");
    }
    system("pause");
    return 0;

}