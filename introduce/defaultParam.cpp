#include <iostream>
#include <cstring>

/* 默认参数 */
int add(int a, int b, int c = 0);//声明时添加

int add(int a, int b, int c)
{
    return a + b + c;
}

bool func(int a, char *errorMsg = NULL)
{
    if(errorMsg != NULL)
        strcpy(errorMsg, "connect error!\n");
    return false;
}

//占位参数
int add(int a, int b, int)
{
    return a + b;
}

int main()
{
    func(1);
    return 0;
}