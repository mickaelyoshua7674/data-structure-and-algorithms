#include <iostream>
/*
struct Rectangle {
    int length, heigth;
};

void initialize(Rectangle *r, int l, int h) {
    r->length=l;
    r->heigth=h;
}

int area(Rectangle r) {
    return r.heigth*r.length;
}

void changeLength(Rectangle *r, int l) {
    r->length=l;
}

int main() {
    Rectangle r;
    initialize(&r, 10, 5);
    printf("Area %d\n", area(r));
    changeLength(&r, 8);
    printf("Length: %d\n", r.length);
}
*/

class Rectangle {
    private:
        int length, heigth;
    public:
        Rectangle(int l, int h) {
            length=l;
            heigth=h;
        }

        int area() {
            return length*heigth;
        }

        void changeLength(int l) {
            length=l;
            printf("Length: %d\n",length);
        }
};

int main() {
    Rectangle r={10,5};
    printf("Area %d\n", r.area());
    r.changeLength(8);
}