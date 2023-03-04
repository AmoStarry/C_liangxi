#include <stdio.h>
#include <windows.h>
int main()
#include <windows.h>
{
    int i,n;
    float x[40],sum=0,pin;
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);+
    }
    for(i=0;i<n;i++)
    {
        sum =sum+x[i];
    }
    pin = sum/n;
    printf("%.2f\n",pin);
    for(i=0; i<n ;i++)
    {
        if(pin<x[i])
        {
            printf("6.2f",x[i]);
        }
        printf("\n");
    }
    system("pause");
    return 0;

}
