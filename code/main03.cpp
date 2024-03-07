#include <iostream>
using namespace std;

class TBase
{
public:
    double* x;
    TBase(double x) {
        this->x = new double(x);
    } 
    TBase(TBase& base) {
        this->x = new double(*base.x);
    }
    ~TBase() {
        delete x;
    }
};

int main() {
    TBase A = TBase(1.25);
    TBase B = A;
    *B.x = 3.33;
    cout << *A.x << "\n" << *B.x << "\n";

    return 0;
}

