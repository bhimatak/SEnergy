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

    vector <int> v(10);

    cout<<v.size()<<"\t"<<v.capacity()<<endl;

    for(auto i: v)
        cout<<i<<endl;
    
    v[5] = 10;
    for(auto i: v)
        cout<<i<<endl;

    v.insert(v.begin()+0,30);
    cout<<"\n==========\n";
    for(auto i: v)
        cout<<i<<endl;

    
    vector <int> v1 = {1,2,3,4,5};
    vector <int> v2 = {10,20,30,40,50};

    v1.insert(v1.end(), v2.begin(),v2.end());
    v1.emplace(v1.end(),101);

    v1.erase(v1.begin()+1);

    cout<<"\n==========\n";
    for(auto i: v1)
        cout<<i<<endl;

    vector <int> v3 = {1,2,3};

    cout<<"\nSize: "<<v3.size()<<"\nCap: "<<v3.capacity()<<endl;
    v3.push_back(4);
    cout<<"\nSize: "<<v3.size()<<"\nCap: "<<v3.capacity()<<endl;
    v3.pop_back();
    cout<<"\nSize: "<<v3.size()<<"\nCap: "<<v3.capacity()<<endl;
    v3.erase(v3.begin());
    cout<<"\nSize: "<<v3.size()<<"\nCap: "<<v3.capacity()<<endl;
    v3.erase(v3.begin());
    cout<<"\nSize: "<<v3.size()<<"\nCap: "<<v3.capacity()<<endl;
    

    
    
    



    return 0;
    
}