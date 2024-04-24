#include <iostream>

void fun1(int n) {
    /*
    Must have some base condition to terminate the function and
    don't become an infinite calling

    Here the function is printing in ascending phase

    If the recursion call is the last execution inside the function then is a Tail Recursion.
    Can be easily converted into a while loop.
    */
    if (n>0) {
        printf("%d\n",n);
        fun1(n-1);
        // print and go to the next call
        // decreasing print
    }
}

void fun2(int n) {
    /*
    Must have some base condition to terminate the function and
    don't become an infinite calling

    Here the function is printing in descending phase

    If the recursion call is the first execution inside the function then is a Head Recursion
    Can't be easily converted into a while loop.
    */
    if (n>0) {
        fun2(n-1);
        printf("%d\n",n);
        // go to the next call and print after the next call is terminated
        // increscing print
    }
}

/*
A loop only have an ascending phase, but recursion
have ascending and descending phase.
*/

int main() {
    int x=3;
    fun1(x);
    printf("\n");
    fun2(x);
    /*
    Careful, the memory of all function calls in recursion is stacked in memory
    and is only released in descending phase.
    */
}