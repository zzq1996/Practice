#include <iostream>
#include "string"
#include "list/List.h"

#include "queue/CirQueue.h"
#include "string/Kmp.h"

#include "tree/BinaryTree.h"


using namespace std;


int main() {

    BinaryTree binaryTree;



    string str;

    binaryTree.CreateBiTree(binaryTree.getRoot());

    binaryTree.PostOrder(binaryTree.getRoot());


    return 0;


}
