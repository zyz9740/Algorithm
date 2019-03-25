//
// Created by 张云哲 on 2019-03-25.
//

#include "heapSort.h"

#define leftChild(x) x*2+1
#define rightChild(x) x*2+2
#define Parent(x) (x-1)/2

void heapSort::swap(int* nums, int a, int b){
    int tmp = nums[a];
    nums[a] = nums[b];
    nums[b] = tmp;
}

void heapSort::down(int *nums, int target, int size) {
    while(leftChild(target)<=size){
        int j = leftChild(target);
        if(j+1<=size && nums[j] < nums[j+1]) j++;
        if(nums[j] > nums[target]) swap(nums, j, target);
        else break;
        target = j;
    }
}

void heapSort::HeapSort(int *nums, int size) {
    //这里的size指的是数组最后一个的索引
    //创建最大堆
    for(int i=Parent(size);i>=0;i--) down(nums,i,size);
    //排序
    int N=size;
    while(N>0){
        //把最大的元素交换到末尾，然后down
        swap(nums, 0, N--);
        down(nums, 0, N);
    }
}

void heapSort::test(){
    int a[8] = {2,6,2,7,2,4,8,9};
    //mergeSort(a, 0, 7);
    HeapSort(a,7);
    for(int i=0;i<8;i++){
        std::cout<<a[i]<<std::endl;
    }
}