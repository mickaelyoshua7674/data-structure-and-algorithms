#include <iostream>
using namespace std;

int main() {
    int a=10;
    // ONLY IN C++
    int &r=a; // initializing 'r' as a reference to 'a'
    // they share the same value in the same address
    cout<<"a:"<<endl;
    cout<<"Value: "<<a<<endl<<"Address: "<<&a<<endl<<endl;
    cout<<"r:"<<endl;
    cout<<"Value: "<<r<<endl<<"Address: "<<&r<<endl;
}