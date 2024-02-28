#ifndef _TEST_H
#define _TEST_H

// C和C++联合编译
// 以C语言的函数命名方式进行编译

#ifdef __cplusplus
extern "C"
{
#endif
    void fun();
    //把C的库函数放进去
#ifdef __cplusplus
}
#endif

#endif