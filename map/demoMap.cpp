#include <iostream>
using namespace std;
#include <stdio.h>
#include <map>

typedef struct stuInfo
{
    int age;
    int height;
    int weight;
    int sex;
}stuInfo;

int main()
{
    map<int,int> mymap;
    /* 7这个位置来决定 */
    mymap[7] = 666;

    printf("map:%d\n", mymap[7]);


    stuInfo info;
    info.age = 20;
    info.sex = 'm';
    map<string, stuInfo> mymap2;
    mymap2["xiaozhou"] = info;
    printf("xiaozhou age :%d sex:%c\n", mymap2["xiaohou"].age, mymap2["xiaozhou"].sex);
    return 0;
}