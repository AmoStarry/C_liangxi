#include <stdio.h>
int main()
{
    int n,i;
    int a=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if((i%7==0)&&(i%11==0))
        {
            printf("%d ",i);
            a++;
        }
        if(a%5==0)
        {
            printf("\n");
        }
    }
    return 0;
}
//计算n以内所有能同时被7和11整除的正整数。
//输出所有能同时被7和11整除的正整数，每行显示5个正整数。(两个数之间用1个空格分隔)