/*

Smart Pointers

*/

#include <iostream>
using namespace std;
// void func()
// {
//     int *ptr = new int();
    
//     delete ptr;
// }

int main()
{
    const int a =10;
    int *ptr = &a;

    *ptr = 20;
    cout<<a<<endl;
    return 0;
}