//Demo on iterators

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	for(int i=0;i<v.size();i++)
		cout<<v.at(i)<<" ";
	cout<<endl;

	vector<int> :: reverse_iterator it;
/*
	// = v.begin();
	//it = v.begin();

	it++;

	cout<<*it<<endl;

	it--;
	cout<<*(it+6)<<endl;
*/

for(it = v.rbegin();it != v.rend();it++)
	cout<<*it<<" ";
cout<<endl;

	return 0;

}
