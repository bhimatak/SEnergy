#include <iostream>
#include <list>

using namespace std;


int main()
{

    list<int> lst = {1,2,3,4};

    cout<<lst.front()<<endl;
    cout<<lst.back()<<endl;

    for(auto l: lst)
        cout<<l<<endl;
    
    
    cout<<"\nSize = "<<lst.size()<<endl;
    cout<<lst.emplace_back(5);
    cout<<"\n==========\n";
    for(auto &l: lst)
        cout<<l<<"\tAddress="<<&l<<endl;
   

    int *tmp= (int *)malloc(sizeof(int));
    *tmp =1;
    *tmp = 2;
    return 0;
       
}