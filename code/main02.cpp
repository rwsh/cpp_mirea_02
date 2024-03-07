#include <iostream>
using namespace std;

class TFunc
{
public:
    int a;
    TFunc(int a) {
        this->a = a;
    } 
    int value() {
        return a * a;
    }
};

class TMyFunc : public TFunc {
public:
    TMyFunc(int a) : TFunc(a) {
    }
    int value() {
        return a * a * a;
    }
};

void print(TFunc* F) {
    cout << "\n" << F->value() << "\n";
}

int main() {
    TFunc *F = new TFunc(5);
    TMyFunc *MyF = new TMyFunc(3);
    print(F);
    print(MyF);
    
    delete F, MyF;
    return 0;
}

