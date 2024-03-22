#include <iostream>

#include "Data.h"

using namespace Myspace;

int main() {
    int size = 4;
    Data<int> myData(size);
    myData.set(0, 34);
    myData.set(1, 12);
    myData.set(2, 89);
    myData.set(3, 5);
    myData.print();
    myData.bubbleSort();
    myData.print();
    return 0;
}