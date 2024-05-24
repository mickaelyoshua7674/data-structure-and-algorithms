#include <iostream>
#include "Array.hpp"

int main() {
    int b[]={1,2,4};
    Array<int> a{b,3};
    a.display();

    a.append(5);
    a.display();
    a.append(6);
    a.display();

    a.rightShift();
    a.display();
    a.leftShift();
    a.display();

    a.insert(2,3);
    a.display();
}