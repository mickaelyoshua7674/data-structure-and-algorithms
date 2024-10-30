#include <iostream>

int fun(int n) {
    static int x=0; // Static variables are created on main scope and in loading time of the program
                    // so it will be not have many copies in all recursion calls, will have only one declaration.
                    // All recursion calls will use the same x variable.

                    // Can also be declared outside the function as a global variable.
    if(n>0) {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main() {
    int a=5;
    printf("%d\n", fun(a));
}