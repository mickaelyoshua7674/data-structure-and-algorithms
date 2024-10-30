#include <iostream>
using namespace std;

int expRecursion(int m, int n) {
    if(n==0) {
        return 1;
    }
    return expRecursion(m,n-1)*m;
}
int expRecursion2(int m, int n) {
    if(n==0) {
        return 1;
    }
    if(n%2==0) {
        return expRecursion2(m*m,n/2);
    }
    return m*expRecursion2(m*m,(n-1)/2);
}
int expLoop(int m, int n) {
    int e=m;
    while(n>1) {
        m*=e;
        n--;
    }
    return m;
}

int main() {
    int m=2;
    int n=5;
    cout<<"Recursion: "<<expRecursion(m,n)<<endl;
    cout<<"Recursion2: "<<expRecursion2(m,n)<<endl;
    cout<<"Loop: "<<expLoop(m,n)<<endl;
}