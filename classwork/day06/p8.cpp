#include <iostream>

using namespace std;

int add(int x, int y)
{
    return (x+y);
}

int mul(int x, int y)
{
    return (x*y);
}



int main()
{
    //function pointer
    //rDt (*funcPtr)(args);
    
    int (*f1)(int, int) = nullptr;
    f1 = add;
    cout<<f1(10,20)<<endl;
    f1 = mul;
    cout<<f1(3,4)<<endl;

}