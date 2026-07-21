#include <iostream>
#include <vector>
#include <exception>

using namespace std;

int main()
{
    vector<int> vInt;
    vInt.push_back(10);
    vInt.push_back(20);
    vInt.push_back(30);
    vInt.push_back(40);

    vInt.emplace_back(50);
    //vInt[6] = 60;

    for(auto i: vInt)
        cout<<i<<endl;

    cout<<"\n=============\n";
    for(int i=0;i<vInt.size();i++)
        cout<<vInt[i]<<endl;

    cout<<"\n=============\n";
    for(int i=0;i<vInt.size();i++)
        cout<<vInt.at(i)<<endl;

    cout<<vInt[10]<<endl;
    try{
        cout<<vInt.at(10)<<endl;
    }catch(exception &e)
    {
        cout<<e.what()<<endl;
    }


    // vInt.insert(1,10);
    cout<<vInt.front()<<endl;
    cout<<vInt.back()<<endl;
    auto iB = vInt.begin();
    auto iE = vInt.end();
    cout<<*iB<<endl;
    cout<<*iE<<endl;
    

    // vInt.clear();

    // cout<<vInt.size()<<endl;
    // cout<<vInt.capacity()<<endl;
    vInt.shrink_to_fit();
    cout<<vInt.size()<<endl;
    cout<<vInt.capacity()<<endl;
    vInt.push_back(60);
    vInt.push_back(70);
    cout<<vInt.size()<<endl;
    cout<<vInt.capacity()<<endl;
    
    



    return 0;
    
}