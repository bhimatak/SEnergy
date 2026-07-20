#include <iostream>

using namespace std;

template <typename T>
class Calculator
{
private:
    T v1, v2;
public:
    Calculator(): v1(0), v2(0){}
    Calculator(const T x, const T y): v1(x), v2(y){}

    T addition(){ return v1+v2; }

};

int main()
{
    Calculator cObj1(10,20);
    cout<<cObj1.addition()<<endl;
    Calculator cObj2('M','N');
    cout<<cObj2.addition()<<endl;


}