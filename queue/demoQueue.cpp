#include <iostream>
using namespace std;
#include <queue>
#include <string.h>

#define BUFFER_SIZE 10

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;

/* 队列 */
int main()
{  
    #if 0 
    queue<int> myqueue;
    for(int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        myqueue.push(idx);
    }
    int length = myqueue.size();
    printf("length:%d\n", length);

    int front = myqueue.front();//front:队头  back:队尾
    int backVal = myqueue.back();
    printf("frontVal:%d\n", front);
    printf("backVal:%d\n", backVal);

    int frontVal = 0;
    while(!myqueue.empty())
    {
        frontVal = myqueue.front();
        printf("frontVal:%d\n", frontVal);

        myqueue.pop();//一定要pop,否则CPU飙升
    }
#endif
    #if 1
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

    queue<Stu_info> myqueue;//
    myqueue.push(stu1);
    myqueue.push(stu2);
    myqueue.push(stu3);

    Stu_info topVal;
    memset(&topVal, 0, sizeof(Stu_info));

    while(!myqueue.empty())
    {
        topVal = myqueue.front();
        myqueue.pop();
        printf("age:%d name:%s sex:%c\n", topVal.age, topVal.name, topVal.sex);
    }
    #endif
    return 0;
}