//编写一个程序，输入a、b、c三个整数，输出其中最大值。
#include<stdio.h>
int max(int a,int b){
return a>b?a:b;
}

int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("%d",max(a,max(b,c)));
return 0;
}