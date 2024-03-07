#include <iostream>
using namespace std;

class TBase 
{
protected:
    int password;
public:
    TBase(int password) {
        this->password = password;
    } 
    void print() {
        cout << password << "\n";
    }
};

class TDiv : TBase {
public:
    TDiv(int x) : TBase(x) {
    }
    void print() {
        cout << "********\n";
    }
};

int main() {
    TBase* A = new TBase(512);
    A->print();
    TDiv* B = new TDiv(512);
    B->print();
    delete A, B;

    return 0;
}

