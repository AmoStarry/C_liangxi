#include <stdio.h>
#include <windows.h>
int main()
{
    char s[80];
    int a=0,i;
    scanf("%s",s);
    for(i=0;s[i]=!"\0";i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            a++;
        }
    }
    printf("%d",a);
    system("pause");
    return 0;
}