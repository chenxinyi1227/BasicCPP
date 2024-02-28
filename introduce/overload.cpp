#include <iostream>
using namespace std;
const 
int add(int a)
{
    cout<<"int:"<<a<<endl;
}

int add(short a)
{
    cout<<"short:"<<a<<endl;
}

int main()
{
    cout<<"sdfdf"<<endl;
    std::cout<<add(3)<<std::endl;
    return 0;
}

