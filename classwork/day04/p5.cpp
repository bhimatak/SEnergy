#include <iostream>
using namespace std;

class B; //forward decalration

class A{
    int val1;
public:
    A(int x): val1(x){}
    void printA(){cout<<"val1: "<<val1<<endl;}

    friend int addition(A,B);

};

class B{
    int val2;
public:
    B(int x): val2(x){}
    void printB(){cout<<"val2: "<<val2<<endl;}

    friend int addition(A,B);


};

int addition(A objA, B objB)
{
    return objA.val1 + objB.val2; //can access private mem as function is declared as friend 
}

/*int add(A objA)
{
    objA.val1; //error as private mem can't access outside class
}*/

int main()
{
    A a(10);
    B b(20);
    cout<<addition(a,b)<<endl;

}