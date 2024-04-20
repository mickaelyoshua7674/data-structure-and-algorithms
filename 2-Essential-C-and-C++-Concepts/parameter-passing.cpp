#include <iostream>

void swapPassByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapPassByAddress(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Only in C++
void swapPassByReference(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    a = 10;
    b = 20;
    printf("Previous\n");
    printf("a: %d / b: %d\n\n", a, b);

    swapPassByValue(a,b);
    printf("By Value\n");
    printf("a: %d / b: %d\n\n", a, b);

    swapPassByAddress(&a,&b);
    printf("By Address\n");
    printf("a: %d / b: %d\n\n", a, b);

    int c, d;
    c = 30;
    d = 40;
    // Only in C++
    printf("Previous\n");
    printf("c: %d / d: %d\n", c, d);
    swapPassByReference(c,d);
    printf("By Reference\n");
    printf("c: %d / d: %d\n", c, d);
    // by using call by reference the code of the function
    // is basically pasted inside the main function, like 
    // an inline function, should not be used in complex functions
    // having loops and complex logic, only with simple functions
}