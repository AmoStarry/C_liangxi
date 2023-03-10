#include <stdio.h>
struct A1{
    virtual ~A1(){}
};
struct A2{
    virtual ~A2(){}
};
struct B1 : A1, A2{};
int main()
{
 B1 d;
 A1* pb1 = &d;
 A2* pb2 = dynamic_cast<A2*>(pb1);  //L1
 A2* pb22 = static_cast<A2*>(pb1);  //L2
 return 0;
}
/*L1语句编译通过，L2语句编译失败
暂时还没有弄懂

dynamic_cast 专门用于将多态基类的指针或引用强制转换为派生类的指针或引用，而且能够检查转换的安全性。
对于不安全的指针转换，转换结果返回 NULL 指针。
dynamic_cast 是通过“运行时类型检查”来保证安全性的。
dynamic_cast 不能用于将非多态基类的指针或引用强制转换为派生类的指针或引用——这种转换没法保证安全性，只好用 reinterpret_cast 来完成。
static_cast 用于进行比较“自然”和低风险的转换，如整型和浮点型、字符型之间的互相转换。另外，如果对象所属的类重载了强制类型转换运算符
 T（如 T 是 int、int* 或其他类型名），则 static_cast 也能用来进行对象到 T 类型的转换。*/