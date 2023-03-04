#include <stdio.h>
#include <windows.h>
int main()
{
    int n,i,a=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if((i%7==0)&&(i%11==0))
        {
            printf("%d",i);
            a++;
        }
        if(a%5==0)
        {
            printf("\n");
        }

    }
    system("puase");
}