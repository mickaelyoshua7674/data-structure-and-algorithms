#include <iostream>
using namespace std;

int main() {
    int A[5]={2,4,6,8,10}; // declared arrays will be on stack memory
    cout<<sizeof(A)<<" bytes"<<endl;
    for (int i=0; i<5; i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl<<endl;
    int B[10] = {1,2}; // an intialized array without specifiyng all elements will be created filling the rest with 0s
    cout<<sizeof(B)<<" bytes"<<endl;
    for (int x:B) {
        cout<<x<<" ";
    }

    return 0;
}