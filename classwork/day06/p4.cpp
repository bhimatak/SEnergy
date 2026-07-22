/*
deque
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq = {1,2,3};
    dq.push_back(4);
    dq.push_front(0);

    for(auto i: dq)
        cout<<i<<"\t";
    cout<<endl;

    cout<<dq.size()<<endl;
    dq.emplace_back(5);
    dq.emplace_front(-1);

    
    for(auto i: dq)
        cout<<i<<"\t";
    cout<<endl;

    cout<<dq.size()<<endl;

    return 0;
}