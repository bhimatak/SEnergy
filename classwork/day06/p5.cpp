/*
Container adapters
stacks
*/
#include <iostream>
#include <stack>
#include <queue>


using namespace std;

/*
int main()
{
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(20);
    cout<<st.top()<<endl;
    st.pop();
    
    cout<<st.size()<<endl;
    
    return 0;
}
*/

/*

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    
    q.emplace(30);
    cout<<q.size()<<endl;

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<endl;

    return 0;
}
*/



int main()
{
    priority_queue<int> pq; //Elements are ordered by priority.
    pq.push(10);
    pq.push(20);
    pq.push(40);
    
    pq.emplace(30);
    cout<<pq.size()<<endl;

    cout<<pq.top()<<endl;

    pq.pop();
    cout<<pq.top()<<endl;

    return 0;
}

