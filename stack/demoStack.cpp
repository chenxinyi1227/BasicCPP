#include <iostream>
#include <stack>//栈
#include <string.h>
using namespace std;

#define BUFFER_SIZE 5

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;


int main()
{
    #if 0
    stack<int> mystack;

    for(int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        mystack.push(idx);
    }
    int length = mystack.size();
    printf("length:%d\n", length);

  
    int top = 0;
    printf("top:%d\n", top);

    while(!mystack.empty())
    {
        top = mystack.top();   
        mystack.pop();
        printf("%d\n", top);
    }
    // mystack.pop();
    #endif

#if  1
    Stu_info stu1, stu2, stu3;
    memset(&stu1, 0, sizeof(stu1));
    stu1.age = 10;
    stu1.sex = 'F';
    strncpy(stu1.name, "zhangsan", sizeof(stu1.name) - 1);

    memset(&stu2, 0, sizeof(stu2));
    stu2.age = 16;
    stu2.sex = 'M';
    strncpy(stu2.name, "lisi", sizeof(stu2.name) - 1);

    memset(&stu3, 0, sizeof(stu3));
    stu3.age = 21;
    stu3.sex = 'M';
    strncpy(stu3.name, "wangwu", sizeof(stu3.name) - 1);

    stack<Stu_info *> mystack;//放结构体指针
    mystack.push(&stu1);
    mystack.push(&stu2);
    mystack.push(&stu3);

    Stu_info * topVal = NULL;
    while(!mystack.empty())
    {
        topVal = mystack.top();
        mystack.pop();
        printf("age:%d name:%s sex:%c\n", topVal->age, topVal->name, topVal->sex);
    }
#endif
    return 0;
}