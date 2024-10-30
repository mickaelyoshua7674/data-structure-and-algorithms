#include <iostream>

int main() {
    int a[5] = {2,5,4,9,8};
    for(int i=0;i<5;i++) {
        printf("%d ", a[i]); // in array 'a' access index 'i'
    }
    printf("\n");
    for(int i=0;i<5;i++) {
        printf("%d ", i[a]); // index 'i' of array 'a'
    }
    printf("\n");
    for(int i=0;i<5;i++) {
        printf("%d ", *(a+i)); // 'a' start address plus 'i' and accessing address with pointer giving the value
    }
}