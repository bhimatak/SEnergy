#include <iostream>
using namespace std;

class Test
{
    int id;
public:
    explicit Test(int id) : id(id){}
    void printID(){ cout<<id<<endl;}
};

int main()
{
    //Test t1 = 10; //this fails as implicit conversion is not possible 
   Test t1(10);

    t1.printID();

    return 0;
}