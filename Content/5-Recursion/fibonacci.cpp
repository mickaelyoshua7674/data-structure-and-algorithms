#include <iostream>
using namespace std;

int fibonacciRecursion(int n) {
    if(n<2) {
        return n;
    }
    return fibonacciRecursion(n-1) + fibonacciRecursion(n-2);
}
// Memoization is storing the results
int fibonacciRecursionMemoization(int n, int *f) {
    if(n<2) {
        return n;
    }
    if(f[n-2]==-1) {
        f[n-2]=fibonacciRecursionMemoization(n-2, f);
    }
    if(f[n-1]==-1) {
        f[n-1]=fibonacciRecursionMemoization(n-1, f);
    }
    return f[n-2]+f[n-1];
}
int fibonacciLoop(int n) {
    int t0=0, t1=1, s;
    if(n<2) {
        return n;
    }
    while(n>1) {
        s=t0+t1;
        t0=t1;
        t1=s;
        n--;
    }
    return s;
}

int main() {
    int n=8;
    int f[n];
    for(int i=0;i<n;i++) {
        f[i]=-1;
    }
    cout<<"Fibonacci "<<n<<"th term Recursion: "<<fibonacciRecursion(n)<<endl;
    cout<<"Fibonacci "<<n<<"th term Recursion Memoization: "<<fibonacciRecursionMemoization(n,f)<<endl;
    cout<<"Fibonacci "<<n<<"th term Loop: "<<fibonacciLoop(n)<<endl;
}