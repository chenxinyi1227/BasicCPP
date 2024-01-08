#include <iostream>
using namespace std;
#include <set>

/* 集合:基于 AVL 实现*/
int main()
{
    set<int> myset;
    /* 插入元素 */
    /* 结合的特性1：去重 */
    myset.insert(10);
    myset.insert(20);
    myset.insert(10);
    myset.insert(30);
    myset.insert(10);

    /* 集合的大小 */
    size_t size = myset.size();
    printf("%ld\n",size);

    /* 去重成功 */
    /* count函数：判断元素是否在集合中 */
    size_t cnt = myset.count(10);
    printf("%ld\n", cnt);

    cnt = myset.count(10);
    printf("cnt:%ld\n", cnt);

    return 0;
}