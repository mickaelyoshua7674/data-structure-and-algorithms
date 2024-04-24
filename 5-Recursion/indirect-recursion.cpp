#include <iostream>
/*
Indirect recursion is when functions call one another creating a cicle.
*/
void funB(int n); // Declaration of funB so when used in funA doen't give an error.
void funA(int n) {
    if(n>0) {
        printf("%d\n",n);
        funB(n-1);
    }
}
void funB(int n) { // Definition of funB.
    if(n>1) {
        printf("%d\n",n);
        funA(n/2);
    }
}

int main() {
    funA(20);
}