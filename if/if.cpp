//成绩判断
#include <stdio.h>
#include <windows.h>
int main()
{
    float 0 score;
    printf("please input a score:\n");
    scanf("%f",&score);
    if (score < 0 ||score >100)
    {
        printf("请输入一个0到一百的数\N");
    }
    else if (score>90)
    {
        printf("A\N");
    }
    else if (score>80)
    {
        printf("B\n");
    }
    else if (score>70)
    {
        printf("B\n");
    }
    else if (score>60)
    {
        printf("及格\n");
    }
    system("pause");
    return 0;
}