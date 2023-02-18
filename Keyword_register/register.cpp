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
const : 修饰只读*/
#include <stdio>
int main()
{
    
    return 0;
}