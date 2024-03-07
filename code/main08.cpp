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
    virtual void whoI() = 0;
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

    TAnimal Animal = TAnimal();

    return 0;
}

