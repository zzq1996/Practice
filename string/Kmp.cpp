/**
* @Author : zhang
* @create 2022/3/10 14:30
*/

#include "Kmp.h"
#include "string"
#include "iostream"

using namespace std;



const int MAX=10000;

int nextTable[MAX];

int pattern[MAX];
int text[MAX];


/*
 * @Description KMP
 *
 * 暴力匹配：两层for循环，挨个匹配
 *  ——低效的原因：某趟已匹配相等的字符序列是模式的某个前缀，这种频繁的重复比较相当于模式串在不断地进行自我比较
 *
 *
 * kmp算法：根据模式串的前后缀创建next表，m为模式串长度
 *  ——已匹配成功的前缀序列中有某个后缀正好是模式的前缀，则将j后滑到这些相等字符对齐的位置，主串指针i不回朔
 *  ——基本概念：前缀、后缀、部分匹配值
 *
 */


/*
 * @Description 获取next数组
 *
 * m为模式串长度
 */
void getNextTable(int m){

    int j=0;//j为模式串指针

    nextTable[j]=-1;

    int i=nextTable[j];

    while (j<m){

        if (i==-1 || pattern[j]==pattern[i]){
            i++;
            j++;
            nextTable[j]=i;

        }else{

            i=nextTable[i];

        }

    }

}


/*
 * @Description 进行kmp匹配，n、m分别为字符串长度
 *
 * 返回首次匹配成功位置
 */
int kmp(int n,int m){


    getNextTable(m);


    int i=0,j=0;

    while(i<n && j<m){

        if (j==-1 || text[i]==pattern[j]){//当前字符匹配成功
            i++;
            j++;
        }else{
            j=nextTable[j];//当前字符匹配失败
        }

    }

    if(j==m){//模式串匹配成功
        return i-j+1;

    }else{//模式串匹配失败
        return -1;
    }

}


/*
 * @Description 运行程序
 * 输入：
 *      1
        13 5
        1 2 1 2 3 1 2 3 1 3 2 1 2
        1 2 3 1 3

   输出：6
 *
 *
 */
void Kmp::string_kmp() {

    int caseNum=0;

    cin>>caseNum;

    while(caseNum--){
        int n,m;
        cin>>n>>m;

        //为主串赋值
        for (int i = 0; i < n; ++i) {
            cin>>text[i];
        }
        //为模式串赋值
        for (int i = 0; i < m; ++i) {
            cin>>pattern[i];
        }

        //KMP
        cout<<kmp(n,m);
    }


}
