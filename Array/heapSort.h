//
// Created by 张云哲 on 2019-03-25.
//

#ifndef ARRAY_HEAPSORT_H
#define ARRAY_HEAPSORT_H

#include <iostream>

class heapSort {
    void down(int* nums, int target, int size);
    void swap(int* nums, int a, int b);
public:
    void HeapSort(int* nums, int size);
    void test();
};


#endif //ARRAY_HEAPSORT_H
