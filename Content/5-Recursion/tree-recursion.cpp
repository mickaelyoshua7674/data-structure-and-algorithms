#include <iostream>

void fun(int n) {
    if(n>0) {
        printf("%d\n",n);
        /*
        If a function is calling itself more then one time it is a Tree Recursion.
        */
        fun(n-1);
        fun(n-1);
    }
}

int main() {
    fun(3);
}