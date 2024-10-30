#include <iostream>

struct Rectangle {
    int length, heigh;
};

int main() {
    Rectangle r={10,5};
    r.length=15;
    printf("Previous length: %d\n",r.length);
    Rectangle *p=&r;
    // p is a pointer, not a variable, so don't have member to call,
    // must use (*p) to call the variable and access the members
    // because the higher precedence is for '.', run '.' first, so must add
    // the () to do the correct execution
    (*p).length=20;
    printf("New length: %d\n",r.length);

    // another way
    // '->' access members through pointers
    p->length=30;
    // read: p assign lenght value 30
    printf("New length: %d\n",r.length);

    // allocate a structure using pointer
    Rectangle *a;
    a=(Rectangle *)malloc(sizeof(Rectangle));
    a->heigh=10;
    a->length=5;
    printf("Area of rectangle is: %d\n", a->heigh*a->length);
    free(a);
}