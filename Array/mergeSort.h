//
// Created by 张云哲 on 2019-03-25.
//

#ifndef ARRAY_MERGESORT_H
#define ARRAY_MERGESORT_H

#include <iostream>

class mergeSort {
    int a[100];
    void merge(int* nums, int left, int mid, int right);
public:
    void MergeSort(int* nums, int left, int right);
    void test();

};


#endif //ARRAY_MERGESORT_H
