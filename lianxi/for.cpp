#include <stdio.h>
#include <windows.h>
int main()
{
    int i, sum=0;
    for(i=1;i<=11;i=i+3)
        sum = sum + i;  //只算最后的结果
        printf("%d\n", sum);
        system("pause");
        return 0;
}