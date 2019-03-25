//
// Created by 张云哲 on 2019-03-25.
//

#include "quickSort.h"

//需要注意的点
//一、两层while循环，外层不要加等于
//二、内层的话加一个i<j循环等于随便写
//三、一定先从右向左
void quickSort::QuickSort(int* nums, int left, int right){
    if(left>=right) return;
    //设置随机数种子
    srand((unsigned) time(NULL));
    int randomPivot = rand() % (right-left+1) + left;
    int pivot = nums[randomPivot];nums[randomPivot]=nums[left];nums[left] = pivot;

    //还有一个需要注意的地方时我们需要从left开始遍历,否则如果右边全部是大数的话会失败.
    int i=left,j=right;
    //错误一：
    //while(i<=j)，这里不能写小于等于，因为等于的时候证明数组已经遍历完了，不能再循环了
    while(i<j) {
        //错误2：应该是从右往左而不是从左往右
        //从右往左是交汇的地方应该是比pivot小的值，从左往右交换的是大的值，所以我们需要交换小的到左边
        //错误5，在与pivot相等的时候应该继续进行而不是停止，这样子才能让左边的指针开始动。
        while (nums[j] >= pivot && i<j) j--;
        while (nums[i] <= pivot && i<j) i++;
        //错误二：这里应该加上判断条件，相等的时候不需要交换;但是这里其实不写也行
        if(i<j) {
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
        }

    }
    nums[left] = nums[i];
    nums[i] = pivot;

    QuickSort(nums, left, i-1);
    QuickSort(nums, i+1, right);
}

void quickSort::test() {
    int a[8] = {2,6,2,7,2,4,8,9};
    //mergeSort(a, 0, 7);
    QuickSort(a,0,7);
    for(int i=0;i<8;i++){
        cout<<a[i]<<endl;
    }
}

