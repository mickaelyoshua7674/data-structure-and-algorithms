#include <iostream>

/*
Nested recursion is when a function call itself and take itself as a parameter also.
*/

int fun(int n) {
    if(n>100) {
        return n-10;
    } else {
        return fun(fun(n+11));
    }
}

int main() {
    printf("%d\n", fun(95));
}