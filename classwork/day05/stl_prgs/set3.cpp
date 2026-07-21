#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	set<int> st;
	int ar[] = {10,20,30,40,50};
	vector<int>v={1,2,3,4,5};

	st.insert(11);

	st.insert(ar,ar+5);
	st.insert(v.begin(),v.end());
/*
	auto it = st.begin();
	st.erase(it);

	st.erase(50);
	
	*/
	/*
	auto b = st.find(300);
	st.erase(b,st.end());
*/
/*
	auto b = st.begin();
	cout<<*b<<endl;

	for(int ele: st)
		cout<<ele<<" ";
	cout<<endl;
*/

	set <int> :: iterator it;

	for(it = st.begin();it != st.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	return 0;
}
