/**
* @Author : zhang
* @create 2022/3/11 16:52
*/



#include "ThreadTree.h"
#include "iostream"

using namespace std;


/*
 * @Description 中序遍历二叉树，一边遍历，一边线索化
 *
 * 对结点中序遍历
 */
void ThreadTree::InThread(ThTree T) {

    if(T!= nullptr){
        InThread(T->leftChild);
        visit(T);//对结点进行线索化
        InThread(T->rightChild);
    }

}

/*
 * @Description 对结点的访问并非输出其值，而是对结点赋值，进行线索化
 */
void ThreadTree::visit(ThTree T) {
    if (T->leftChild== nullptr){
        T->leftChild=pre;
        T->ltag=1;
    }
    if (pre!= nullptr && pre->rightChild == nullptr){
        pre->rightChild=T;
        pre->rtag=1;
    }
    pre=T;
}


/*
 * @Description 中序线索化二叉树T
 */
void ThreadTree::CreateInThread(ThTree &T) {

    pre= nullptr;//pre初始为nullptr

    if (T!= nullptr){//非空二叉树才能线索化

        InThread(T);//中序线索化二叉树

        if (pre->rightChild== nullptr){
            pre->rtag=1;//处理遍历的最后一个结点
        }

    }


}


/*
 * @Description 建立二叉树，并为结点赋值
 *
 */
void ThreadTree::CreateBiTree(ThTree &T) {

    char item;
    cin>>item;

    if(item=='#'){
        T= nullptr;
    }else{
        T->data=item;
        CreateBiTree(T->leftChild);
        CreateBiTree(T->rightChild);
    }

}


/*
 * @Description 找到以p为根的子树中，第一个被中序遍历的结点
 */
ThTree ThreadTree::firstNode(ThTree p) {

    //循环找到最左下结点（不一定是叶结点）
    while (p->ltag==0){
        p=p->leftChild;
    }

    return p;
}


/*
 * @Description 在中序线索二叉树中找到结点p的后继结点
 */
ThTree ThreadTree::nextNode(ThTree p) {

    if (p->rtag==0){
        return firstNode(p->rightChild);
    }else{
        return p->rightChild;
    }
}






/*
 * @Description 对中序线索二叉树进行中序遍历
 *
 * 空间复杂度为O(1)
 */
void ThreadTree::inorder(ThTree T) {
    for (ThTree p= firstNode(T) ;  p!= nullptr ; p= nextNode(p)) {
        cout<<p->data<<endl;
    }

}


/*
 * @Description 找到以p为根的子树中，最后一个被中序遍历的结点
 */
ThTree ThreadTree::lastNode(ThTree p) {

    while (p->rtag==0){//循环到最右下结点（不一定是叶结点）
        p=p->rightChild;
    }

    return p;
}

/*
 * @Description 在中序线索二叉树中找到结点p的前驱结点
 */
ThTree ThreadTree::preNode(ThTree p) {

    //左子树中最右下结点
    if (p->ltag==0){
        return lastNode(p->leftChild);
    }else{
        return p->leftChild;//ltag==1直接返回前驱线索
    }
}

/*
 * @Description 对中序线索二叉树进行逆向中序遍历
 */
void ThreadTree::revInorder(ThTree p) {

    for(ThTree t= lastNode(p);t!= nullptr;t= preNode(t)){
        cout<<t->data<<endl;
    }

}










