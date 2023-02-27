  /*算术运算符  i++ i--  先用后加加
                  ++i --i  先加后用 */
#include <stdio.h>
int main()
{
    int num;
    int i =3;
    num = (i++) + (i++) + (i++); //num=9 i=6
    num = (++i) + (++i) + (++i); //num=6+6+6=18 i=6 linux 系统下不一样 num=5+5+6=16 i=6

    printf("num =%d\n, i =%d\n",num ,i); 
    return 0;
}
