#include <iostream>
#include <memory>
using namespace std;

class B;

class A {
public:
    shared_ptr<B> ptrB;
    ~A() {
        cout << "A destroyed\n";
    }
};

class B {
public:
    weak_ptr<A> ptrA;

    ~B() {
        
        cout << "B destroyed\n";
    }
};

int main() {

    auto a = make_shared<A>();
    auto b = make_shared<B>();

    a->ptrB = b;
    b->ptrA = a;

    return 0;
}