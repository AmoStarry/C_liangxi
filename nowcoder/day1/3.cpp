#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct object object;
struct object {
    char data[3];
};
 
int main(void) {
    object obj_array[3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
 
    object *cur = obj_array;
    printf("%c %c\n", *(char *)((char *)(cur) + 2), *(char *)(cur + 2));
    return 0;
}
/*c g cur本为object类型指针 第一个占位符输出时，参数中将cur先强制转化为字符型指针 然后加2，
即指向obj_array数组的第一个元素中的字符c，而第二个占位符输出时，参数中先让cur指针加2，即到达obj_array第3个元素的地址处，
然后强制转化为字符型指针，再用*获取1个字节的内容即字符g*/
