//
// Created by 张云哲 on 2019-03-20.
//

#ifndef TREE_TREENODE_H
#define TREE_TREENODE_H

#include <iostream>
class TreeNode {
public:
    int data;
    TreeNode* leftChild;
    TreeNode* rightChild;

    TreeNode(int n){
        this->data = n;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};


#endif //TREE_TREENODE_H
