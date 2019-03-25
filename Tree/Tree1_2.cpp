//
// Created by 张云哲 on 2019-03-20.
//

#include "Tree1_2.h"

void Tree1_2::re_preOrder(TreeNode *root) {
    if(root == nullptr) return ;
    cout<<root->data<<' ';
    re_preOrder(root->leftChild);
    re_preOrder(root->rightChild);
}

void Tree1_2::re_inOrder(TreeNode *root) {
    if(root == nullptr) return ;
    re_inOrder(root->leftChild);
    cout<<root->data<<' ';
    re_inOrder(root->rightChild);
}

void Tree1_2::re_postOrder(TreeNode *root) {
    if(root == nullptr) return ;
    re_postOrder(root->leftChild);
    re_postOrder(root->rightChild);
    cout<<root->data<<' ';
}

void Tree1_2::levelOrder(TreeNode *root) {
    if(root == nullptr){
        cout<<"Empty tree!"<<endl;
        exit(1);
    }

    queue<TreeNode*> Queue;
    Queue.push(root);
    while(!Queue.empty()){
        TreeNode* current = Queue.front();
        Queue.pop();
        cout<<current->data<<' ';
        if(current->leftChild!= NULL) Queue.push(current->leftChild);
        if(current->rightChild!=NULL)Queue.push(current->rightChild);
    }
    cout<<endl;
}

void Tree1_2::nore_preOrder(TreeNode *root) {
    if(root==nullptr){
        cout<<"Empty Tree"<<endl;
        exit(1);
    }
    stack<TreeNode*> Stack;
    Stack.push(root);
    while(!Stack.empty()){
        TreeNode* current = Stack.top();
        Stack.pop();
        cout<<current->data<<' ';
        if(current->rightChild!=NULL) Stack.push(current->rightChild);
        if(current->leftChild!=NULL) Stack.push(current->leftChild);
    }
    cout<<endl;
}

void Tree1_2::nore_inOrder(TreeNode *root) {
    if(root==nullptr){
        cout<<"Empty Tree"<<endl;
        exit(1);
    }
    //这里记住不要push进栈！！！只需要把current指向root即可
    stack<TreeNode*> Stack;
    TreeNode* current = root;
    while(current!=NULL || !Stack.empty()){
        if(current != NULL){
            Stack.push(current);
            current = current->leftChild;
        }else{
            TreeNode* tmp = Stack.top();
            Stack.pop();
            cout<<tmp->data<<' ';
            current = tmp->rightChild;
        }
    }
    cout<<endl;

}

void Tree1_2::nore_postOrder(TreeNode *root) {
    //等我忘一忘再回来填，现在填就是背书了
}

void Tree1_2::test(){
    const int ARRAY_LENGTH = 8;
    int preorder[ARRAY_LENGTH] = {1,2,3,4,5,6,7,8};
    int inorder[ARRAY_LENGTH] = {3,2,4,1,5,6,7,8};
    Tree1_1 tree1_1;
    TreeNode* root = tree1_1.createBinTree(preorder, inorder, ARRAY_LENGTH);

    re_preOrder(root);
    cout<<endl;

    nore_preOrder(root);
    cout<<endl;

    re_inOrder(root);
    cout<<endl;

    nore_inOrder(root);
    cout<<endl;

    re_postOrder(root);
    cout<<endl;

    levelOrder(root);
}