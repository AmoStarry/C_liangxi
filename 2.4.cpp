#include <stdio.h>
int main()
{
    int n,m,i,sum;
    scanf("%d",&m);
    for(n=2;n<=m;n++)
    {
        sum= 0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum =sum +i;
            }
        }
        if(n==sum)
        {
            printf("%d its factors are",n);
            for{i=1;i<n;i++}
            {
                if(n%i==0)
                {
                    printf("%d",i);
                }

            }
            printf("\n");
        }
    }
    return 0;
}