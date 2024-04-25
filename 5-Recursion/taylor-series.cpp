#include <iostream>
using namespace std;

float taylorRecursion(int x, int n) {
    static float p=1., f=1.;
    float r;
    if(n==0) {
        return 1.;
    }
    r=taylorRecursion(x, n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}
float taylorHornerRuleLoop(int x, int n) {
    float s=1.;
    while(n>0) {
        s=1.+x*s/n;
        n--;
    }
    return s;
}
float taylorHornerRuleRecursion(int x, int n) {
    static float s=1.;
    if(n==0) {
        return s;
    }
    s=1+x*s/n;
    return taylorHornerRuleRecursion(x,n-1);
}

int main() {
    int x=1, n=10;
    cout<<"Taylor Recursion: "<<taylorRecursion(x,n)<<endl;
    cout<<"Taylor Horner's Rule Loop: "<<taylorHornerRuleLoop(x,n)<<endl;
    cout<<"Taylor Horner's Rule Recursion: "<<taylorHornerRuleRecursion(x,n)<<endl;
}