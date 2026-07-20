#include <iostream>
using namespace std;

template <typename T1, typename T2> 
T1 add(T1 v1, T2 v2)
{
    return (v1+v2);
}


int main()
{
    int a=10;
    float b = 20.22;
    char c = 'A';

    cout<<add(a,b)<<endl;
    cout<<add(a,a)<<endl;
    cout<<add(a,c)<<endl;
    return 0;
}