//
// Created by 张云哲 on 2019-03-20.
//

#ifndef TREE_TREE1_1_H
#define TREE_TREE1_1_H

/*
 * 题目：重建二叉树：利用前序与中序的数组构建一个二叉树
 * 思路：利用遍历前序数组，然后以这个值为根节点划分中序数组，依次递归即可。这个题目的递归编写其实不难的。
 * Tips：我这里使用的是一个int*来修改preCurr的值，报错异常的话直接使用cout和exit即可
 */

#include "TreeNode.h"

using namespace std;

class Tree1_1 {
private:
    TreeNode* create(int* preorder, int* inorder, int* preCurr, int InL, int InR);
    int search(int *inorder, int target ,int InL, int InR);

public:
    TreeNode* createBinTree(int *preorder, int *inorder, int length);
    void test();
};


#endif //TREE_TREE1_1_H
