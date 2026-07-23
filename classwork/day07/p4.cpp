#include <iostream>

using namespace std;

int main()
{

    int a=10,b=20;
    auto addition = [b](int x, int y) -> int { return x+y+b; };

    cout<<addition(4,5)<<endl;


 
    auto addition1 = [b](int x, int y)mutable -> int { b=25; return x+y+b; };

    cout<<addition(4,5)<<endl;

    cout<<b<<endl;


    // vector<int> v = {1,2,3,4,5,6,7,8,9};
    // vE
    // vO 
    return 0;
}

// for_each(v.begin(),v.end(),[&](const int n){
//     if(n%2==0) vE.pushback(n);
//     else vO.pushback(n);
// });

// for(auto ve:VE)