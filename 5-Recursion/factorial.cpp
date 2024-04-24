#include <iostream>
using namespace std;

int factorialRecursion(int n) {
    if(n==1) {
        return 1;
    }
    return n*factorialRecursion(n-1);
}
int factorialLoop(int n) {
    int f=1;
    for(int i=1;i<=n;i++) {
        f=f*i;
    }
    return f;
}

int main() {
    int n=4;
    cout<<"Recursion: "<<factorialRecursion(n)<<endl;
    cout<<"Loop: "<<factorialRecursion(n)<<endl;
}