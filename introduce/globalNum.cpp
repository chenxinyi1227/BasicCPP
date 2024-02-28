#include <iostream>
using namespace std;

int a = 10;

int main()
{
    int a = 20;
    /* :: a代表这个a来自全局 ::域解析符 */
    std::cout<<::a<<std::endl;

    return 0;
}