#include <iostream>
using namespace std;

struct Rectangle {
    int lenght;
    int height;
};

struct Card {
    int face, shape, color;
};

int main() {
    Rectangle r1;
    r1.lenght = 2;
    r1.height = 3;

    Rectangle r2 = {10,5};
    printf("Size of memort of Rectangle Structure is %d\n", sizeof(r2));
    printf("Area of rectangle is %d\n", r2.height*r2.lenght);

    Card deck[52] = {{1,0,0},{2,0,0}}; // array of structures
    cout<<deck[0].face<<endl;
}