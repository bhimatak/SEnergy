#include <iostream>

using namespace std;

class rectangle{

    int h;
    int w;
public:
    rectangle(): h(0),w(0){}
    rectangle(const int x, const int y): h(x),w(y){}
    
    void printArea() { cout<<"\nArea: "<<h*w<<endl;}
    //friend rectangle additionRect(const rectangle &, const rectangle &);

    rectangle operator +(const rectangle objR) //objR == r2, this-> r1
    {
        rectangle retObj;
        retObj.h = this->h + objR.h;
        retObj.w = this->w + objR.w;

        return retObj;
    }
};

// rectangle additionRect(const rectangle &r1 ,const rectangle &r2)
// {
//     //rectangle r3(r1.h+r2.h),(r1.w+r2.w)
//     return rectangle((r1.h + r2.h),(r1.w+r2.w));
// }

int main()
{
    rectangle r1(3,4);
    rectangle r2(4,3);
    rectangle r3 = r1+r2;
    
    r3.printArea();

    // cout<<r3;
    // cin>>r3;
}