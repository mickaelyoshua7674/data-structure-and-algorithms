#include <iostream>
#include "Array.hpp"

int main() {
    int b[]={1,2,3,4};
    Array<int> a{b,4};
    a.append(5);
    a.display();
    a.append(6);
    a.display();
    a.append(7);
    a.display();
}