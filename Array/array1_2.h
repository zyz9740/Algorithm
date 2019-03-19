//
// Created by 张云哲 on 2019-03-07.
//

#ifndef ALGRITHM_ARRAY1_2_H
#define ALGRITHM_ARRAY1_2_H

/*
 * 题目：给一个长度为n的数组，返回数组中任意一个重复的数字，要求时间复杂度为O(n),空间复杂度为O(1)，而且要求不能交换数组中的元素。
 * 思路：
 */

#include <iostream>
using namespace std;

class array1_2 {
public:
    int numCount(int* nums, int len, int rangestart, int rangeend);
    int finddup(int* nums, int len);
    int test();
};


#endif //ALGRITHM_ARRAY1_2_H
