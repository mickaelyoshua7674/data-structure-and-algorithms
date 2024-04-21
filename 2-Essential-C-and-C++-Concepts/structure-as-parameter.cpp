#include <iostream>

struct Rectangle {
    int length, heigth;
};
int rectangleArea(Rectangle r) {
    r.length++;
    return r.length * r.heigth;
};
int rectangleArea2(Rectangle *r) {
    r->length++;
    return r->length * r->heigth;
};

struct Test {
    int A[5];
    int n;
};
void func(Test t) {
    t.A[0] = 12;
    t.A[1] = 14;
}

Rectangle * createRec(int l, int h) {
    Rectangle *p;
    p = new Rectangle;
    // in C
    // p = (Rectangle *)malloc(sizeof(Rectangle));
    p->length=l;
    p->heigth=h;
    return p;
}

int main() {
    Rectangle r = {10,5};
    printf("%d\n", rectangleArea(r));
    printf("%d\n", r.length);
    printf("%d\n", rectangleArea2(&r));
    printf("%d\n\n", r.length);

    Test t = {{2,4,6,8,10},5};
    for (int i=0; i<5; i++) {
        printf("%d ",t.A[i]);
    }
    printf("\n");

    func(t);
    // arrays are passed by address, but when inside a structure that
    // was passed as value the array is copied for the new function
    // so its not possible alter the array inside the main function
    for (int i=0; i<5; i++) {
        printf("%d ",t.A[i]);
    }
    printf("\n");

    Rectangle *ptr = createRec(15,5);
    printf("Area: %d", ptr->length*ptr->heigth);
    delete ptr;
    // in C
    // free(ptr);
}