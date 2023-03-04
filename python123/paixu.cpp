#include <stdio.h>
int main()
{
    int a[10],t,index,j;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i];)
    }
    for(int i=0;i<9;i++)
    {
        index=i;
        for(j=index;j<10;i++)
        {
            if(a[index]>a[j])
            {
                index=j;
            }
        }
        if(index!=i)
        {
            t=a[index];
            a[index]=a[i];
            a[i]=t;
        }

    }
    for(int i=0;i<10;i++)
    {
        printf("%5d",a[i]);
    }
    return 0;
}