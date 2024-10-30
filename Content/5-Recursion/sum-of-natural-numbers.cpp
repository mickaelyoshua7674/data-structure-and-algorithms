#include <iostream>
using namespace std;

int sumNaturalNumRecursion(int n) {
    if(n==0) {
        return 0;
    }
    return sumNaturalNumRecursion(n-1)+n;
}
int sumNaturalNumFormula(int n) {
    return n*(n+1)/2;
}
int sumNaturalNumLoop(int n) {
    int s=0;
    for(int i=1;i<=n;i++) {
        s=s+i;
    }
    return s;
}

int main() {
    int i=5;
    cout<<"Recursion: "<<sumNaturalNumRecursion(i)<<endl;
    cout<<"Formula: "<<sumNaturalNumFormula(i)<<endl;
    cout<<"Loop: "<<sumNaturalNumLoop(i)<<endl;
}