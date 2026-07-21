#include <iostream>
#include <set>

using namespace std;

int main()
{
	int arr[]={10,85,35,76,4,3,45};

	set<int> s1 (arr,arr+3);
	set<int> s2 (arr+3, arr+6);

	//s1.swap(s2);

	for(auto e : s1)
		cout<<e<<" ";
	cout<<endl;
	for(auto e : s2)
		cout<<e<<" ";
	cout<<endl;

	set<int>::iterator it_low, it_upper;

	it_low= s1.lower_bound(35);
	it_upper=s1.upper_bound(76);

	s1.erase(it_low, it_upper);

	for(set<int> :: iterator it=s1.begin();it!=s1.end();it++)
	{
		cout<<" "<<*it;
	}
		cout<<endl;

	
	return 0;
}
