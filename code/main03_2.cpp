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

class TDiv : public TBase {
public:
    double* y;
    TDiv(double x, double y): TBase(x) {
        this->y = new double(y);
    }
    TDiv(TDiv& div): TBase(div) {
        this->y = new double(*div.y);
    }

    ~TDiv() {
        TBase::~TBase();
        delete y;
    }
};

int main() {
    TDiv A = TDiv(1.25, 2.55);
    TDiv B = A;
    *B.x = 3.14;
    *B.y = 2.71;
    cout << *A.x << "\t" << *A.y << "\n" << *B.x << "\t" << *B.y << "\n";

    return 0;
}

