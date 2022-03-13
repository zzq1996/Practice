/**
* @Author : zhang
* @create 2022/3/13 17:11
*/




#include "BinarySearchTree.h"
#include "iostream"

using namespace std;

/*
 * @Description 在二叉搜索树T中查询关键值为key的元素
 *
 * 最坏空间复杂度:O(1)
 */
BSTree BinarySearchTree::search1(BSTree T, int key) {

    //若树为空或等于根结点值
    while (T!= nullptr && key!=T->key){

        if(key<T->key){
            T=T->leftChild;
        }else{
            T=T->rightChild;
        }
    }
    return T;
}


/*
 * @Description 在二叉搜索树T中查询关键值为key的元素(递归实现)
 *
 * 最坏空间复杂度：O(h)
 */
BSTree BinarySearchTree::search2(BSTree T, int key) {

    if(T== nullptr){//查找失败
        return nullptr;
    }

    if(key==T->key){//查找成功
        return T;

    }else if(key<T->key){//在左子树中找
        return search2(T->leftChild,key);

    }else{//在右子树中找
        return search2(T->rightChild,key);
    }


}







const BSTNode *BinarySearchTree::getRoot() const {

    return root;
}


void BinarySearchTree::setRoot( BSTNode *root) {

    BinarySearchTree::root = root;
}

/*
 * @Description 输出结点值
 */
void BinarySearchTree::visit(BSTree T) {
    cout<<T->key<<endl;

}

/*
 * @Description 在BST中插入关键值为K的新结点（递归实现）（建立过程）
 *
 * 这里的行参为引用类型哟
 *
 * 最坏空间复杂度：O(h)
 *
 * 新插入的结点一定是叶子结点
 */
int BinarySearchTree::insert(BSTree &T, int k) {

    if (T== nullptr){//原树为空，新插入的结点为根结点

        T=new BSTNode();
        T->key=k;
        T->leftChild= nullptr;
        T->rightChild= nullptr;
        return 1;//返回1，插入成功

    }else if(k==T->key){//存在关键字相同的结点，插入失败
        return 0;

    }else if(k<T->key){//插到左子树
        return insert(T->leftChild,k);

    }else{//插到右子树
        return insert(T->rightChild,k);
    }

}


/*
 * @Description 创建BST
 *
 * 不同的关键字序列可能得到不同的BST
 *
 * str:关键字序列
 * n:关键字个数
 *
 */
void BinarySearchTree::creat(BSTree &T, int *str, int n) {

    T= nullptr;
    int i=0;
    while (i<n){
        insert(T,str[i]);
        i++;
    }
}
