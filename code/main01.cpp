#include <iostream>
using namespace std;

class TPoint
{
private:
    int x, y;
public:
    TPoint(int x, int y){
        this->x = x;
        this->y = y;
    }
    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};

class TCircle : TPoint {
private:
    int R;
public:
    TCircle(int x, int y, int R) : TPoint(x, y) {
        this->R = R;
    }
    void print (){
        TPoint::print();
        cout << "\nR = " << R;
    }
};

int main() {
    TCircle *C = new TCircle(2, 3, 5);
    C->print();
    delete C;

    return 0;
}

