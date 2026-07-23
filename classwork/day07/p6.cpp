#include <iostream>
#include <memory>

using namespace std;

int main()
{
    string str1 = "Hello World!";

    cout<<"\nBefore Str1: "<<str1<<endl;
    string str2 = move(str1);
    cout<<"\nAfter Str1: "<<str1<<endl;
    
    cout<<"\nStr2: "<<str2<<endl;

    return 0;


    

}