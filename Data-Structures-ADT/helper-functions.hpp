#ifndef HELPER_FUNCTIONS
#define HELPER_FUNCTIONS

/*
Swap two integer variables
*/
template <typename T>
inline void swap(T *x, T *y) {
    T temp=*x;
    *x=*y;
    *y=temp;
}

#endif