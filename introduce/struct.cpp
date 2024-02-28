#include <iostream>

struct student
{
    int a;
    int b;
};
using  Tcp = student;//代替typedef
typedef  Tcp student;

int main()
{
    student s;
    s.a = 10;
    s.b = 13;
    std::cout<<s.a<<std::endl;
    std::cout<<s.b<<std::endl;
    return 0;
}