#include "Array.hpp"

void test(int a[]) {
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++) {
        std::cout<<a[i]<<endl;
    }
}

int main() {
    int a[] = {1,2,3,4};
    test(a);
}