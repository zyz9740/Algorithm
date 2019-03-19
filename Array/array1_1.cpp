//
// Created by 张云哲 on 2019-03-07.
//

#include "array1_1.h"


int array1_1::finddup(int num[],int len,int* duplication){
    if(num == nullptr || len <= 0){
        return false;
    }

    for(int* i=num;i<num+len;i++){
        if(*i >= len || !i) return false;
    }

    int j = 0;
    while(j<len){
        int k = num[j];
        if(k==j) j++;
        else{
            if(k == num[k]){
                *duplication = k;
                return true;
            }else{
                int tmp = num[j];
                num[j]=num[k];
                num[k]=tmp;
            }
        }
    }
    return false;
}

int array1_1::test() {
    // insert code here...
    int* test[4];
    int* a = nullptr;
    int b[7] = {2,2,3,0,4,5,3};
    int c[7] = {1,45,3,4,3,6,2};
    int d[7] = {1,2,3,4,5,6,0};
    test[0]=a;test[1]=b;test[2]=c;test[3]=d;

    for(int i=0;i<4;i++){
        int duplication = 0;
        int result = finddup(test[i],7, &duplication);
        cout<<"duplication:"<<duplication<<std::endl;
        std::cout<<"result: "<<result<<std::endl;
    }

    return 0;
}