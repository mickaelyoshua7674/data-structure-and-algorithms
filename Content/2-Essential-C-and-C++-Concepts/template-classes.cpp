#include <iostream>
using namespace std;

// T can be any datatype, is an abstraction
template <class T>
class Arithametic {
    private:
        T a, b;
    public:
        Arithametic(T a, T b) {
            this->a=a;
            this->b=b;
        }

        T add() {
            return a+b;
        }
        T sub() {
            return a-b;
        }
};

int main() {
    // define inside '<>' the datatype of the template
    Arithametic<int> ar{10,5};
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl<<endl;
    
    Arithametic<float> ar1{1.5,1.2};
    cout<<ar1.add()<<endl;
    cout<<ar1.sub()<<endl;
}