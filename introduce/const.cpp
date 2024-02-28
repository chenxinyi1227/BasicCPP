#include <iostream>
namespace A
{
    const int size = 10;
}

namespace B
{
    const int size = 20;
}

int main()
{
    std::cout<<A::size<<std::endl;
    return 0;

}