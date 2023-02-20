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
//老是上传不上去,鸽了鸽了，时间上太赶了！
