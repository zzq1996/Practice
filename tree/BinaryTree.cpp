/**
* @Author : zhang
* @create 2022/3/10 17:21
*/


#include "BinaryTree.h"
#include "iostream"


using namespace std;

/*
 * @Description 输出结点信息
 */
void BinaryTree::visit(BiTree T) {

    cout<<T->data<<" ";

}

/*
 * @Description 创建二叉树
 *
 * 返回的是新建二叉树根结点的指针
 *
 * while (cin>>str){

        int position=0;//标记字符串处理位置
        binaryTree.setRoot(binaryTree.CreateBiTree(position,str));
        binaryTree.PostOrder(binaryTree.getRoot());
        cout<<endl;

    }

 *
 */
BiTree BinaryTree::CreateBiTree(int& position,string str){

    //从字符串中获取结点值
    char c=str[position++];

    if (c=='#'){
        return nullptr;
    }

    BiTree tree=new BTNode(c);//创建根结点，这里对结点的赋值过程在构造函数中完成

    tree->leftChild= CreateBiTree(position,str);//创建左子树

    tree->rightChild= CreateBiTree(position,str);//创建右子树

    return tree;
}




/*
 * @Description 先序遍历
 *
 * 这里的T是根结点的指针
 */
void BinaryTree::PreOrder(BiTree T) {

    if(T!= nullptr){
        visit(T);
        PreOrder(T->leftChild);
        PreOrder(T->rightChild);
    }

}

/*
 * @Description 中序遍历
 *
 * 这里的T是根结点的指针
 */
void BinaryTree::InOrder(BiTree T) {
    if(T!= nullptr){
        InOrder(T->leftChild);
        visit(T);
        InOrder(T->rightChild);
    }
}


/*
 * @Description 后序遍历
 *
 * 这里的T是根结点的指针
 */
void BinaryTree::PostOrder(BiTree T) {

    if(T!= nullptr){
        PostOrder(T->leftChild);
        PostOrder(T->rightChild);
        visit(T);
    }

}



/*
 * @Description 新建二叉树
 *
 *
 *
 */
void BinaryTree::CreateBiTree(BiTree &T) {

    char item;
    cin>>item;

    if(item=='#'){
        T= nullptr;
    }else{
        T=new BTNode(item);
        CreateBiTree(T->leftChild);
        CreateBiTree(T->rightChild);
    }
}


/*
 * @Description 构造函数
 */
BinaryTree::BinaryTree() {
    this->root= nullptr;

}



BiTree& BinaryTree::getRoot() {

    return this->root;
}










