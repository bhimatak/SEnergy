#include <iostream>

using namespace std;


int add(int, int);
int add(int,int, int);

int add(int x, int y)
{
    return (x+y);
}

int add(int x, int y, int z) //int add(int x, int y, int z=10) this will conflict with overload
{
    return (x+y+z);
}

int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10,20,30)<<endl;

    return 0;
    
}