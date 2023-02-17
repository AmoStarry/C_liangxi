/*void 是用来修饰函数的参考或返回值，代表函数没有参数或没有返回值
：
 
        void fun（void）//括号不写默认是void
        {

        }
        代表fun函数没有返回值，fun函数没有参数
*/

#include <stdio.h>
#include <windows.h>

int main()
{
        char a = 'a';
        short int b=10;
        int c;
        long int d;
        float e;
        double f;
        printf("%d\n",sizeof(a));
        printf("%d\n",sizeof(b));
        printf("%d\n",sizeof(c));
        printf("%d\n",sizeof(d));
        printf("%d\n",sizeof(e));
        printf("%d\n",sizeof(f));
        system("pause");    //
        return 0;
 }
