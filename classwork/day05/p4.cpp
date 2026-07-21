#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> lst={1,2,3,4,5};

    list<int>::iterator itL;
    
    for(itL = lst.begin(); itL != lst.end();itL++)
        cout<<*itL<<"\t";
    cout<<endl;
    
    list<int>::reverse_iterator itR;
    
    
    for(itR=lst.rbegin();itR!=lst.rend();itR++)
        cout<<*itR<<endl;

    return 0;
}