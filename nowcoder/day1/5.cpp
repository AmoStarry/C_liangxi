#include <stdio.h>
int main() 
{
    char c = 'a';
    if ('a' < c <= 'z') 
    printf("Low");
    else
    printf("UP");
    return 0;
}

/*关系运算符具有左结合性，所以表达式（’a'<c<=’z’)将先求’a'<c的值，即为

0（假），再求0<=’z’的值，即为1（真），所以执行if后面的语句printf（"LOW");故正确

答案为A。*/