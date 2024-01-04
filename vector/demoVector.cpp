#include <iostream>//输入输出流
#include <vector>//动态数组
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 5
using namespace std;//

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;

int main()
{
    #if 0
    vector<int> myvec;//int a  vector<int>类型 myvec变量
    myvec.push_back(5);//压栈:插入数据
    int size = myvec.size();
    int capacity = myvec.capacity();
    printf("size:%d\n", size);
    printf("capacity:%d\n", capacity);

    for(int idx = 0; idx < BUFFER_SIZE; idx)
    {
        myvec.push_back(idx);
    }
    //查询元素大小
    int size = myvec.size();
    int capacity = myvec.capacity();
    printf("size:%d\n", size);
    printf("capacity:%d\n", capacity);
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

    vector<Stu_info> myvec;
    myvec.push_back(stu1);
    myvec.push_back(stu2);
    myvec.push_back(stu3);

    int size = myvec.size();
    int capacity = myvec.capacity();
    printf("size:%d\n", size);
    printf("capacity:%d\n", capacity);

    Stu_info tmpInfo;
    memset(&tmpInfo, 0, sizeof(tmpInfo));

    for(int idx = 0; idx < size; idx++)
    {
        tmpInfo = myvec.at(idx);
        printf("age:%d\t namr:%s\t sex:%c\n", tmpInfo.age, tmpInfo.name, tmpInfo.sex);
    }
    #endif  
    return 0;
}
