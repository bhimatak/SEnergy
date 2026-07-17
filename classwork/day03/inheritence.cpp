/*

Base member     public inherit  protected inherit   private inherit
─────────────   ──────────────  ─────────────────   ───────────────
public:         public          protected           private
protected:      protected       protected           private
private:        inaccessible    inaccessible        inaccessible

*/


#include <iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    A(): a(0){}
    A(int v): a(v){}
    void printA() { cout<<"\nA="<<a<<endl;}

};


class B: protected A
{
public:
    int b;
public:
    B(): B(0){}
    B(int v): b(v){}
    void printB() { 
        a=10;
        cout<<"\nB="<<b<<endl;}

};

class C: private B
{
public:
    int c;
public:
    C(): c(0){}
    C(int v): c(v){}
    void printC() { cout<<"\nC="<<c<<endl;
    a = 10;
    }

};
class D: public C{
public:
    void printD()
    {
        b = 10;    
    }
}



int main()
{
    C objC;
   // objC.a = 10;

    return 0;
}
