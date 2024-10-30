#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length, heigth;
    
    public:
        Rectangle() {
            length=heigth=1;
        }
        Rectangle(int l, int h) {
            length=l;
            heigth=h;
        }

        int area() {
            return length*heigth;
        }
        int perimeter() {
            return 2*(length+heigth);
        }

        int getLength() {
            return length;
        }
        void setLength(int l) {
            length=l;
        }

        ~Rectangle() {}
};

int main() {
    Rectangle r{10,5};
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setLength(20);
    cout<<r.getLength()<<endl;
}