#include <iostream>
using namespace std;

class TAnimal 
{
public:
    TAnimal() {
    } 
    void say() {
        cout << "I am ";
        whoI();
    }
private:
    virtual void whoI() {
        cout << "Animal";
    }
};

class TCat : public TAnimal {
    void whoI() override {
        cout << "Cat";
    }
};

int main() {
    TCat* Cat = new TCat();
    Cat->say();
    delete Cat;

    return 0;
}

