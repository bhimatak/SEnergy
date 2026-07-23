#include <iostream>
#include <thread>

using namespace std;
typedef long long int LLInt;

void printODD(LLInt s,LLInt e)
{
    //apply lock
    for(LLInt i = s; i<e;i++)
        cout<<"ODD = "<<i<<endl;
    //unlock
}

void printEven(LLInt s,LLInt e)
{
    for(LLInt i = s; i<e;i++)
        cout<<"Even = "<<i<<endl;
}

int main()
{
    LLInt s = 1;
    LLInt e = 9999999999;
    
    thread t1(printODD,s,e);
    thread t2(printODD,s,e);
    t1.join();
    t2.join();

    return 0;


}

