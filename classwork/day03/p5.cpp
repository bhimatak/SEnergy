#include <iostream>
using namespace std;

template <class T> 
void swapFunc(T& x,T& y)
{
    T t = y;
    y = x;
    x = t;
}
/*
template <typename T> 
void swapFunc(T& x,T& y)
{
    T t = y;
    y = x;
    x = t;
}
*/

int main()
{
    int a=10, b=20;
    float c=22.22, d=33.33;
    char e='A', f='B';

    cout<<"\nBefore swaping"<<endl;
    cout<<"\n ints \t"<<a<<"\t"<<b<<endl;
    cout<<"\n floats \t"<<c<<"\t"<<d<<endl;
    cout<<"\n char \t"<<e<<"\t"<<f<<endl;

    swapFunc(a,b);
    swapFunc(c,d);
    swapFunc(e,f);

    cout<<"\nAfter swaping"<<endl;
    cout<<"\n ints \t"<<a<<"\t"<<b<<endl;
    cout<<"\n floats \t"<<c<<"\t"<<d<<endl;
    cout<<"\n char \t"<<e<<"\t"<<f<<endl;


    return 0;
}