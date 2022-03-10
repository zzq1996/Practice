#include <iostream>
#include "string"
#include "list/List.h"


using namespace std;


int main() {


    List list;
    for (int i = 0; i < 5; ++i) {
        list.Insert(i);
    }
    list.Print();
    return 0;


}
