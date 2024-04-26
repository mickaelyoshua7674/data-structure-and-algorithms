#include <iostream>
using namespace std;

int combination(int n, int r) {
    // Pascal Triangle
    if(r==0 || n==r) {
        return 1;
    }
    return combination(n-1,r-1) + combination(n-1,r);
}

int main() {
    int n=5;
    int r=2;
    cout<<"Combination result: "<<combination(n,r)<<endl;
}