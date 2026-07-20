#include <iostream>
#include <typeinfo>

using namespace std;

template <class T>
void addition(const T v1, const T v2)
{
    cout<<typeid(v1).name()<<endl;
    if(typeid(v1) == typeid(int))
        cout<<"Integer"<<endl;
    else if(typeid(v1) == typeid(float))
        cout<<"Float"<<endl;
    else if(typeid(v1) == typeid(string))
        cout<<"String"<<endl;
    else if(typeid(v1) == typeid(char *))
        cout<<"Array of char"<<endl;
    


    //return v1+v2;
}

int main()
{
    // cout<<addition(10,20)<<endl;
    // cout<<addition("abc", "xyz");

    string s1 = "abc";
    char str1[] = "xyz";
    addition(10,20);
    addition(11.11,20.22);
    addition(s1,s1);
    addition(str1,str1);

    return 0;
}