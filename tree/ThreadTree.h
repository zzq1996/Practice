/**
* @Author : zhang
* @create 2022/3/11 16:52
*/




#ifndef PRACTICE_THREADTREE_H

#define PRACTICE_THREADTREE_H

/*
 * @Description 线索树结点
 *
 * tag为1表示线索，为0表示子树
 */

struct ThreadTreeNode{

    char data;

    ThreadTreeNode* leftChild;
    ThreadTreeNode* rightChild;

    int ltag,rtag;//左右线索标志


};


typedef ThreadTreeNode* ThTree;

ThTree  pre= nullptr;//全局变量pre，指向当前访问结点的前驱

/*
 * @Description 线索二叉树
 *
 *
 */
class ThreadTree {

private:
    ThTree root;

public:

    void InThread(ThTree T);
    void visit(ThTree T);

    void CreateBiTree(ThTree &T);

    void CreateInThread(ThTree &T);

    ThTree firstNode(ThTree p);

    ThTree nextNode(ThTree p);

    ThTree lastNode(ThTree p);

    ThTree preNode(ThTree p);

    void revInorder(ThTree p);

    void inorder(ThTree T);
};


#endif //PRACTICE_THREADTREE_H
