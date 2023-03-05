#include <stdio.h>
#include <windows.h>
int main()
{
    int n;
    float m;
    scanf("%d",&n);  //else if 阶梯用电
    if(n<=220)
    {
        m = n*0.49;
    }
    else if(n<=400)
    {
         m = 220*0.49+(n-220)*0.54;
    }
    else if(n>400)
    {
        m = 220*0.49+(400-220)*0.54+(n-400)*0.79;
    }
    
    printf("%.2f",m);
    system("pause");
}