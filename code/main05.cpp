#include <iostream>
using namespace std;

class TBase 
{
protected:
    int x;
public:
    TBase(int x) {
        this->x = x;
    } 
    void print() {
        cout << x << "\n";
    }
};

class TDiv : TBase {
public:
    TDiv(int x) : TBase(x) {
    }
    void print() {
        cout << TBase::x * TBase::x << "\n";
    }
};

int main() {
    TDiv* A = new TDiv(512);
    A->print();
    delete A;

    return 0;
}

