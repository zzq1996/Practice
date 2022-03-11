/**
* @Author : zhang
* @create 2022/3/10 17:21
*/




#ifndef PRACTICE_BINARYTREE_H

#define PRACTICE_BINARYTREE_H

#include "string"

using namespace std;

struct BTNode{

    char data;//保存结点数值

    BTNode* leftChild;
    BTNode* rightChild;

    BTNode(char c){
        this->data=c;
    }

};


typedef BTNode* BiTree;


class BinaryTree {

private:
     BiTree root;
public:

//    BiTree root;

//     BinaryTree(BiTree &T);

    BinaryTree();

    void visit(BTNode* T);

    BiTree CreateBiTree(int& position,string str);

    void CreateBiTree(BiTree &T) ;

    void PreOrder(BiTree T);
    void InOrder(BiTree T);
    void PostOrder(BiTree T);

    BiTree&  getRoot() ;



};


#endif //PRACTICE_BINARYTREE_H
