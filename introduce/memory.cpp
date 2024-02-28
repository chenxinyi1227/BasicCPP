#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main1()
{
    char* str = (char*)malloc(sizeof(char) * 10);
    if(str ==NULL)
    {
        printf("malloc error\n");
        return -1;
    }
    strcpy(str, "hello");
    std::cout<<str<<std::endl;
    free(str);

    char** str2 = (char**)malloc(sizeof(char*) * 10);
    if(str2 ==NULL)
    {
        printf("malloc error\n");
        return -1;
    }
    for(int i = 0; i < 3; i++)
    {
        str2[i] = (char*)malloc(sizeof(char)*10);
        if(str2[i] == NULL)
        {
            printf("malloc error\n");
            return -1;
        }
        strcpy(str2[i], "hello");
    }
    for(int i =0 ; i < 3; i++)
    {
        free(str2[i]);
    }
    free(str2);
    return 0;
}

int main()
{
#if 0
    char *s1 = (char*)malloc(sizeof(char) * 10);

    //1、不需要计算内存的大小
    //2、不需要对指针进行转换
    //不需要判断指针是否为空：抛出异常，终止程序
    char * s = new char[10];
    strcpy(s, "world");
    cout<<s<<endl;
    /* 释放数组 */
    delete []s;

    int *a = new int(10);//()赋值 [] 申请数组
    cout<<*a<<endl;
    delete a;
#endif
    char **s = new char*[3];
    for(int i = 0; i < 3; i++)
    {
        s[i] = new char[10];
        strcpy(s[i], "hello"); 
        cout<<s[i]<<endl;
    }

    for(int i = 0; i < 3; i++)
    {
        delete []s[i];
    }

    delete []s;

    return 0;
}