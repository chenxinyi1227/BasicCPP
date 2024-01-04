#include <iostream>
using namespace std;
#include <string>
#include <stdbool.h>

int main()
{
    #if 0
    bool a  = true;//占一个字节，返回值只有true:1和false:0
    int len = sizeof(a);
    printf("len:%d\n", len);
    #endif
    #if 1
    string s = "hello world";//char * ptr = "hello"
    const char * s = "hello";
   /* .c_str():将string类型的变量转换成char* */
    printf("s:%s\n", s.c_str());// 报错：s不是char *  

    #endif
    return 0;
}
   

