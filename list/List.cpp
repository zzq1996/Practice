/**
* @Author : zhang
* @create 2022/3/9 15:55
*/



#include "List.h"
#include "iostream"

using namespace std;

/*
 * @Description 构造函数
 * 建立头指针
 */
List::List() {

    LinklistNode* linklistNode=new LinklistNode;
    linklistNode->next= nullptr;
    linklistNode->data=-1;

    head=linklistNode;

}

/*
 * @Description 插入函数
 *
 * 行参x为引用类型，与传递的实参共享存储空间
 */
void List::Insert(int &x) {

    LinklistNode* linklistNode=new LinklistNode;
    linklistNode->data=x;
    linklistNode->next=head->next;
    head->next=linklistNode;

}

/*
 * @Description 删除第i个位置的结点，结点数据由x保存
 */
bool List::Remove(int i, int &x) {
    LinklistNode* del;
    LinklistNode* current;
    current=head;
    for (int j = 1; j < i-1; ++j) {
        current=current->next;
    }
    del=current->next;//保存被删除结点
    current->next=del->next;//重新拉链
    x=del->data;//保存被删结点元素
    delete del;//删除del指向的结点
    return true;
}



void List::Print() {
    LinklistNode* current;
    current=head;
    while(current->next!= nullptr){
        cout<<current->next->data<<endl;
        current=current->next;
    }
}



