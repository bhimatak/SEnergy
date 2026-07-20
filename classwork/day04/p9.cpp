/*
STL - vector, list map, iterators, algo
map <int,string> m;
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1;
    cout<<"\nSize: "<<v1.size()<<endl;
    cout<<"\nCap: "<<v1.capacity()<<endl;
    
    v1.push_back(10);
    cout<<"\nSize: "<<v1.size()<<endl;
    cout<<"\nCap: "<<v1.capacity()<<endl;
    v1.push_back(20);
    cout<<"\nSize: "<<v1.size()<<endl;
    cout<<"\nCap: "<<v1.capacity()<<endl;
    
    v1.push_back(30);
    cout<<"\nSize: "<<v1.size()<<endl;
    cout<<"\nCap: "<<v1.capacity()<<endl;
    
    v1.push_back(40);
    cout<<"\nSize: "<<v1.size()<<endl;
    cout<<"\nCap: "<<v1.capacity()<<endl;

    v1.pop_back();
    v1.pop_back();
    cout<<"\nSize: "<<v1.size()<<endl;
    cout<<"\nCap: "<<v1.capacity()<<endl;

    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;

    
        
    
    return 0;

}