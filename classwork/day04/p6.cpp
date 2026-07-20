#include <iostream>

using namespace std;

class rectangle{

    int h;
    int w;
public:
    rectangle(const int x, const int y): h(x),w(y){}
    
    void printArea() { cout<<"\nArea: "<<h*w<<endl;}
    friend rectangle additionRect(const rectangle &, const rectangle &);
};

rectangle additionRect(const rectangle &r1 ,const rectangle &r2)
{
    //rectangle r3(r1.h+r2.h),(r1.w+r2.w)
    return rectangle((r1.h + r2.h),(r1.w+r2.w));
}

int main()
{
    rectangle r1(3,4);
    rectangle r2(4,3);
    rectangle r3 = additionRect(r1, r2);
    
    r3.printArea();
}