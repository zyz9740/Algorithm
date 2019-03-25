//
// Created by 张云哲 on 2019-03-25.
//

#ifndef ARRAY_ARRAY1_3_H
#define ARRAY_ARRAY1_3_H

#include <iostream>

class array1_3 {
public:
    double findMiddle(int* nums, int length);
    int findKBottom(int* nums, int k, int left, int right);
    int patition(int* nums, int left, int right);
    void test();
};


#endif //ARRAY_ARRAY1_3_H
