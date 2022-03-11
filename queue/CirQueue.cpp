/**
* @Author : zhang
* @create 2022/3/9 17:53
*/




#include "CirQueue.h"
#include "iostream"

using namespace std;

/*
 * @Description 构造函数
 */
CirQueue::CirQueue(int size) {
    rear=0;
    front=0;
    queueSize=size;
    Q=new int[size];//申请长度为size的数组作为循环队列
}


/*
 * @Description 判空
 *
 * 注意判空条件
 */
bool CirQueue::IsEmpty() {


//    if(rear==0 && front==0){
//        return true;
//    }else{
//        return false;
//
//    }

    return (front==rear);

}

/*
 * @Description 判满
 */

bool CirQueue::IsFull() {

    return ( (rear+1)%queueSize==front );

}


/*
 * @Description 入队
 *  1、判队满
 *  2、将元素插入尾指针
 *  3、尾指针加1
 */
bool CirQueue::EnQueue(int x) {

    if(!IsFull()){
        Q[rear]=x;
        rear=(rear+1)%queueSize;
        return true;
    }else{
        return false;

    }


}

/*
 * @Description 出队
 *  1、判对空
 *  2、将队头元素取出
 *  3、队头指针加1
 */
bool CirQueue::DeQueue(int &x) {

    if(!IsEmpty()){
        x=Q[front];
        front=(front+1)%queueSize;
        return true;
    } else{
        return false;
    }

}




/*
 * @Description 获取队内元素个数
 */
int CirQueue::GetSize() {

    return (rear-front+queueSize)%queueSize;

}




/*
 * @Description 输出队内元素
 *
 */
void CirQueue::PrintMember() {

    while (rear!=front){
        cout<<Q[front];
        front++;
    }

}

