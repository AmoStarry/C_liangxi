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
        char a = 'a';       //charcharcharcharcharcharcharcharchar  1
        short int b=10;    //shortshortshortshortshortshortshortshortshortshortshort 2
        int c;             //4
        long int d;        //4
        float e;           //floatfloatfloatfloatfloatfloatfloatfloatfloatfloaatfloatfloatfloat 4
        double f;          //double double double double double double doule double   8 这个看编译器
        printf("%d\n",sizeof(a));
        printf("%d\n",sizeof(b));
        printf("%d\n",sizeof(c));
        printf("%d\n",sizeof(d));
        printf("%d\n",sizeof(e));
        printf("%d\n",sizeof(f));
        system("pause");    //vscode 环境特有，运行终端暂停在结果页面
        return 0;
 }
