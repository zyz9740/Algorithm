//
// Created by 张云哲 on 2019-03-07.
//

#include "array1_2.h"


//统计nums中start到end的闭区间的数字个数
int array1_2::numCount(int* nums, int len, int rangestart, int rangeend){
    if(nums == nullptr || len <= 0){
        return -1;
    }
    int count = 0;
    for(int i=0;i<len;i++){
        if(nums[i] >= rangestart && nums[i] <= rangeend)
            count ++;
    }
    return count;
}

//
int array1_2::finddup(int* nums, int len){
    if(nums == nullptr || len <= 0){
        return -1;
    }
    int start = 1,end = len-1;
    while(start < end){
        int mid = (end-start)/2 + start;
        int leftcount = numCount(nums, len, start, mid);
        int rightcount = numCount(nums,len, mid+1, end);

        if(leftcount > mid-start+1){
            end = mid;
        }else if(rightcount > end - mid){
            start = mid+1;
        }else return -1;
    }
    if(start == end){
        int count = numCount(nums, len, start, end);
        if(count >1) return start;
        else return -1;
    }
    return -1;
}

int array1_2::test(){
    int a[8] = {2,3,5,4,3,2,6,7};
    int len = 8;
    int result = finddup(a, len);
    cout << result;
    return 0;
}