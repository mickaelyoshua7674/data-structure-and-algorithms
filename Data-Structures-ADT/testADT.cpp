#include "Array.hpp"

int main() {
    int b[]={1,2,3,4};
    Array<int> a{b,4};
    cout<<a;
}