//
// Created by 张云哲 on 2019-03-25.
//

#include "mergeSort.h"


void mergeSort::merge(int* nums, int left, int mid, int right){
    for(int i=left;i<=right;i++){
        a[i] = nums[i];
    }
    int i=left,j=mid+1,k=left;
    while(k<=right){
        if(i>mid) nums[k++] = a[j++];
        else if(j>right) nums[k++] = a[i++];
        else if(a[i]<a[j]) nums[k++] = a[i++];
        else nums[k++] = a[j++];
    }
}


void mergeSort::MergeSort(int* nums, int left, int right){
    if(left>=right) return;
    //这里出了问题，我原来写的是
    //int mid=left+(right-left+1)/2;
    //不用加1的
    int mid=left+(right-left)/2;
    MergeSort(nums, left, mid);
    MergeSort(nums,mid+1, right);
    merge(nums, left, mid, right);

}

void mergeSort::test() {
    int a[8] = {2,6,2,7,2,4,8,9};
    //mergeSort(a, 0, 7);
    MergeSort(a,0,7);
    for(int i=0;i<8;i++){
        std::cout<<a[i]<<std::endl;
    }

}