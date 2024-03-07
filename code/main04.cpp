#include <iostream>
using namespace std;

class TBase final
{
private:
    double x;
public:
    TBase(double x) {
        this->x = x;
    } 
    void print() {
        cout << x << "\n";
    }
};

class TDiv : TBase {

};

int main() {
    TBase* A = new TBase(1.25);
    A->print();

    delete A;

    return 0;
}

