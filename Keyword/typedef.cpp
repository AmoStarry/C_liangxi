              //-----------------------------关键字--------------------------------------//
/*regiser ：是寄存器的意思，修饰寄存器变量，编译的时候将其存储空间分配在寄存器中
CPU取数据的时候去寄存器中拿数据比去内存中拿数据要快
因为寄存器比较宝贵，所以不能定义数组
register 只能修饰 字符型及整型的，不能修饰浮点型
register char a;
register short int b;
register float d//错误的
因为register 变量放在寄存器中不存放在内存中不能用指针对变量取地址
register int a=100;
int*p;
p=&a;//错误的
*/
/*static :静态变量
const : 修饰只读
sizeof: 测变量或数组的占用储存空间的字节数
typedef :给已有的类型，重新起一个类型名，并没有创建一个新的类型
unsigned short int a =10;
unsigned short int IN16;
typedef unsigned short int IN16;//IN16就是unsigned short int*/
#include <stdio.h>
#include <windows.h>
//unsigned short int a;
//unsigned short int IN16;
typedef unsigned short int IN16;
int main()
{
    unsigned short int a=101;
    IN16 b=111;
    printf("a=%d\n\r",a);
    printf("b=%d\n\r",b); 
    system("pause");  
    return 0;
}
/*volatile： 定义的变量，是以改变的，即告诉CPU每次用volatile变量的时候，重新去内存中取保证用的是最新的值，而不是寄存器中的备份
volatile int a=10;*/
//老是上传不上去,鸽了鸽了，时间上太赶了
//转战linux

    //---------------------------------数据类型------------------------------------------//
/*格式化输出字符
%d 十进制有符号整型
%u 十进制无符号整型
%x 以十六进制表示的整型
%o 以八进制表示的整数
%f float型浮点数
%lf double型浮点数
%e 指数形式浮点数
%s 字符串  %c 单个字符
%p 指针的值
指数形式：123e3 
不以f结尾的常量是double类型
以f结尾的常量（3.14f）是float类型
//printf("**%3d\n*",1);  //不足前面空格填充
//printf("**%-3d\n*",1);  //不足后面空格填充
//printf("**%03d*\n",1) ;//不足前面0填充
//printf("**%03d*"\n,1234); //超过了前面不起作用
//pritntf("**%5.2f**\n",3.1415926);  //** 3.14** 前面是位宽点占一位，超出位宽不算
*/

