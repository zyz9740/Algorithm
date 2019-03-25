//
// Created by 张云哲 on 2019-03-25.
//

#ifndef ALGRITHM_QUICKSORT_H
#define ALGRITHM_QUICKSORT_H

#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class quickSort {
public:
    void QuickSort(int* nums, int left, int right);
    void test();
};


#endif //ALGRITHM_QUICKSORT_H
