#ifndef ARRAY
#define ARRAY

#include "helper-functions.hpp"
using namespace std;

template <typename T>
class Array {

private:
    T* arr;
    int size;
    int length;

    void increaseSize();

public:
    Array(T a[], int l) {
        length = l;
        size=length+1;
        arr=new T[size];
        
        for(int i=0; i<length; i++) {
            arr[i]=a[i];
        }
    }
    ~Array() {
        delete[] arr;
    }

    void display();
    void append(T value);
    void insert(T index, T value);
    T search(T key, string searchType);
    T get(int index);
    void set(int index, T value);
    T max();
    T min();
    T sum();
    T avg();
    void reverse(string reverseType);
    void insertSorted(T value);
    bool isSorted();
    void rearrange();
    Array merge(Array arr2);
    Array Union(Array arr2);
    Array intersection(Array arr2);
    Array difference(Array arr2);
};

template <typename T>
void Array<T>::increaseSize() {
    size=length+2;
    T *newArr = new T[size]; // allocate a new array with the new size
    for(int i=0; i<length; i++) { // copy all elements from previous array to the new
        newArr[i] = arr[i];
    }
    delete[] arr; // detele address of previous array
    arr=newArr; // point to the new array
    newArr=NULL; // dereference the new created pointer so there is only one pointer to the new array
}

template <typename T>
void Array<T>::display(){
    cout<<"[";
    for(int i=0; i<length; i++) {
        if(arr[i]==arr[length-1]) {
            cout<<arr[i]<<"]"<<endl;
        } else {
            cout<<arr[i]<<",";
        }
    }
};

template <typename T>
void Array<T>::append(T value) {
    if(length==size) {
        increaseSize();
    }
    arr[length++]=value;
}

#endif