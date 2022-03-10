/**
* @Author : zhang
* @create 2022/3/9 17:53
*/


/*
 * @Description 循环队列
 *
 * 实现方式
 *  1、数组
 *  2、C++自带的STL
 *      ——将queue队首元素弹出后，再将其压入队列尾部
 *
 */

#ifndef PRACTICE_CIRQUEUE_H

#define PRACTICE_CIRQUEUE_H


/*
 * @Description 用数组实现循环队列
 */
class CirQueue {

private:
    int front,rear;//队头、队尾所在元素下标
    int* Q;//申请数组的指针
    int queueSize;//队列长度

public:
    CirQueue(int size);//构造函数，指定队列大小
    bool IsEmpty();
    bool IsFull();
    bool EnQueue(int x);
    bool DeQueue(int &x);
    int GetSize();
    void PrintMember(CirQueue seqQueue);







};


#endif //PRACTICE_CIRQUEUE_H
