/**
* @Author : zhang
* @create 2022/3/9 17:53
*/




#include "CirQueue.h"

/*
 * @Description 构造函数
 */
CirQueue::CirQueue(int size) {
    rear=0;
    front=0;
    queueSize=size;
    Q=new int[size];//申请长度为size的数组作为循环队列
}


bool CirQueue::IsEmpty() {
    return false;
}

bool CirQueue::IsFull() {
    return false;
}


/*
 * @Description 入队
 *  1、判队满
 *  2、将元素插入尾指针
 *  3、尾指针加1
 */
bool CirQueue::EnQueue(int x) {


    return false;
}

bool CirQueue::DeQueue(int &x) {
    return false;
}



int CirQueue::GetSize() {
    return 0;
}

void CirQueue::PrintMember(CirQueue seqQueue) {

}

