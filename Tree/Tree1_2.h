//
// Created by 张云哲 on 2019-03-20.
//

/*
 * 题目：使用前序，中序，后序，层次遍历二叉树结构，使用递归与非递归两种方法
 * 思路：递归的遍历很好办，层次遍历只需要使用队列也比较好做；
 *
 */

#ifndef TREE_TREE1_2_H
#define TREE_TREE1_2_H

#include "TreeNode.h"
#include "Tree1_1.h"
#include <queue>
#include <stack>

using namespace std;

class Tree1_2 {
public:
    void re_preOrder(TreeNode* root);
    void re_inOrder(TreeNode* root);
    void re_postOrder(TreeNode* root);
    void levelOrder(TreeNode* root);
    void nore_preOrder(TreeNode* root);
    void nore_inOrder(TreeNode* root);
    void nore_postOrder(TreeNode* root);

    void test();

};


#endif //TREE_TREE1_2_H
