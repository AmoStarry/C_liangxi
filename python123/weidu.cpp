#include <stdio.h>
#include <windows.h>
void main()
{
    double f,c;
    scanf("%lf",&f);  //注意输入必须是lf
    c= 5*(f-32)/9;
    printf("%.3f",c);
    system("pause");
    return 0 ;
}