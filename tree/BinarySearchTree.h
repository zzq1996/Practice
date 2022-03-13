/**
* @Author : zhang
* @create 2022/3/13 17:11
*/

/*
 * @Description 二叉搜索树
 *
 *
 */

#ifndef PRACTICE_BINARYSEARCHTREE_H

#define PRACTICE_BINARYSEARCHTREE_H


struct BSTNode{
    int key;
    BSTNode* leftChild;
    BSTNode* rightChild;

};



typedef BSTNode* BSTree;



class BinarySearchTree {

private:
    BSTree root;

public:

    BSTree search1(BSTree T,int key);

    BSTree search2(BSTree T,int key);

    void visit(BSTree T);

    int insert(BSTree &T,int k);

    void creat(BSTree &T,int str[],int n);


    const BSTNode *getRoot() const;

    void setRoot( BSTNode *root);


};


#endif //PRACTICE_BINARYSEARCHTREE_H
