#include <iostream>

using namespace std;

int rValue(int s)
{
    int ret = s;
    if(ret == 10)
        return ret;
    ret += 1;
    rValue(ret);
     
}

int disp(int s=10)
{
    cout<<s<<endl;
}

int main()
{

    int retValue = rValue(1);
    
    cout<<retValue<<endl;
    disp(101);
    return 0;
}