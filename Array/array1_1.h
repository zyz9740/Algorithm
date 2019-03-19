//
// Created by 张云哲 on 2019-03-07.
//

/*
 * 题目：给一个长度为n的数组，返回数组中任意一个重复的数字，要求时间复杂度为O(n),空间复杂度为O(1)
 * 思路：从头遍历，将这个数应该在的位置的数字与这个数交换，让每个数都在他应该在的位置上。这样子只要有数字的位置被占据之后，就可以证明有重复数字了。
 */

#ifndef ALGRITHM_ARRAY1_1_H
#define ALGRITHM_ARRAY1_1_H

#include <iostream>
using namespace std;
class array1_1 {
public:
    int finddup(int num[],int len,int* duplication);
    int test();
};


#endif //ALGRITHM_ARRAY1_1_H
