#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    vector<int> vOdd;
    vector<int> vEven;
    auto Odd = [&](int i){if (i%2 != 0) vOdd.push_back(i);};
    auto Even = [&](int i){if (i%2 == 0) vEven.push_back(i);};
    
    for_each(v.begin(),v.end(),Odd);
    for_each(v.begin(),v.end(),Even);
    
    cout<<vOdd.size()<<endl;
    for(auto i: vOdd) 
        cout<<i<<endl;
    cout<<"\nEven\n";
    for(auto i: vEven) 
        cout<<i<<endl;

    vector<int> vOdd1;
    for_each(v.begin(),v.end(),[&](int i){if (i%2 != 0) vOdd1.push_back(i); });

    auto ret = []() -> int {return 10;};

    cout<<ret()<<endl;


    enum Calc{
        PLUS,
        MINUS,
        MUL,
        DIV
    };

    switch(cond)
    {
        case PLUS:

    }

    func()
    {
        int a,b;

        return(a,b);
    }


    vector<int,vector<int,int>>

    funt(string n)
    {

    }

    int main()
    {
        func("bhima");
    }


}