#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int>::iterator it =v.begin();
    advance(it,2);
    *it = 10;
    for(; it != v.end();it++)
        cout<<*it<<"\tAddress="<<&(*it)<<endl;
    
    
    for(it=v.begin(); it != v.end();it++)
        cout<<*it<<endl;
    
    cout<<"\nSize: "<<v.size()<<"\tCap: "<<v.capacity()<<endl;
    return 0;
}