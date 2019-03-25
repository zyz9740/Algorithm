//
// Created by 张云哲 on 2019-03-25.
//

#include "array1_3.h"

double array1_3::findMiddle(int *nums, int length) {
    if(length % 2){
        return findKBottom(nums, length/2, 0, length-1);
    }else{
        int left = findKBottom(nums, length/2, 0, length-1);
        int right = findKBottom(nums, length/2+1, 0, length-1);
        return ((double)left+(double)right)/2;
    }
}

int array1_3::findKBottom(int *nums, int k, int left, int right) {
    if(left >= right) return nums[left];
    int mid = patition(nums,left,right);
    if(mid+1 == k) return nums[mid];
    else if(mid+1 > k) return findKBottom(nums, k, left, mid-1);
    else return findKBottom(nums,k,mid+1,right);
}

int array1_3::patition(int *nums, int left, int right) {
    if(left>=right) return left;
    int pivot = nums[left];
    int l=left,r=right;
    while(l<r){
        while(r>l && nums[r]>=pivot) r--;
        while(r>l && nums[l]<=pivot) l++;
        if(r>l){
            int tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
        }
    }
    nums[left] = nums[l];
    nums[l] = pivot;
    return l;
}

void array1_3::test(){
    int a[4] = {2,1,3,4};
    double middle = findMiddle(a, 4);
    std::cout<<middle<<std::endl;
}