#ifndef ARRAY
#define ARRAY

#include <iostream>
#include "helper-functions.hpp"
using namespace std;

template <typename T>
class Array {
private:
    T* arr;
    int size;
    int length;

public:
    Array(T *a, int l) {
        arr=a;
        length=l;
        size=l+1;
        arr=new T[size];
    }
    ~Array() {
        delete[] arr;
    }

    T length();
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
T Array<T>::length(){
    return length;
};

template <typename T>
ostream& operator<<(ostream& out, Array<T> a) {
    out<<"[";
    for(int i=0; i<a.length(); i++) {
        if(a.arr[i]==a.arr[a.length()-1]) {
            out<<a.arr[i]<<"]";
        } else {
            out<<a.arr[i]<<",";
        }
    }
    return out;
}

#endif