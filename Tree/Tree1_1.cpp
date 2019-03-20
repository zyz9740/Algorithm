//
// Created by 张云哲 on 2019-03-20.
//

#include "Tree1_1.h"

TreeNode* Tree1_1::createBinTree(int *preorder, int *inorder, int length){
    int preCurr = 0;
    return create(preorder, inorder, &preCurr, 0, length-1);
}


TreeNode* Tree1_1::create(int *preorder, int *inorder, int* preCurr ,int InL, int InR) {
    if(InR < InL) return NULL;
    TreeNode* root = new TreeNode(preorder[*preCurr]);
    int pivot = search(inorder, preorder[*preCurr], InL, InR);
    (*preCurr)++;
    root->leftChild = create(preorder, inorder, preCurr,InL, pivot-1);
    root->rightChild = create(preorder, inorder, preCurr, pivot+1, InR);
    return root;
}
 int Tree1_1::search(int *inorder, int target ,int InL, int InR) {
    for(int i=InL;i<=InR;i++){
        if(inorder[i] == target) return i;
    }
    cout<<"前序遍历与中序遍历不对应！"<<endl;
    exit(1);
    return 1;//??如何表示返回的异常情况？？
}

void Tree1_1::test(){
    const int ARRAY_LENGTH = 8;
    int preorder[ARRAY_LENGTH] = {1,2,3,4,5,6,7,8};
    int inorder[ARRAY_LENGTH] = {3,2,4,1,5,6,7,8};
    TreeNode* root = Tree1_1::createBinTree(preorder, inorder, ARRAY_LENGTH);
    std::cout<<"success!";
}