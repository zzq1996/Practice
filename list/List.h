/**
* @Author : zhang
* @create 2022/3/9 15:55
*/

/*
 * @Description 链表
 * 1、单链表
 * 2、带头结点的单链表
 * 3、循环链表
 * 4、双循环链表
 *
 * 实现：将链表的结点设为固定的结构体，然后用类实现。
 *  a.在类中定义成员对象为结构体类型的指针作为头指针，通过该类对象（头指针）访问链表
 *  b.根据需要可在类中设置多个关于该链表的成员对象（头指针，尾指针等等）
 *  c.插入实现函数中只涉及对结点结构体的新建，与类无关。
 *
 *  注意：类的head对象的值始终指向表头结点
 *
 *
 */


#ifndef PRACTICE_LIST_H

#define PRACTICE_LIST_H


/*
 * @Description 链表结点
 */


struct LinklistNode{
    int data;
    LinklistNode* next;
};




class List {

private:
    LinklistNode* head;//表头指针
public:
    List();

    void Insert(int &x);//将新元素x插入

    bool Remove(int i,int &x);//删除第i个位置的结点（i从1开始），将被删结点值通过引用类型x返回

    void Print();

};


#endif //PRACTICE_LIST_H
