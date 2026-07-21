#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	vector<int> :: const_iterator it;
	for(it = v.cbegin(); it !=v.cend(); it++)
	{
		*it = (*it)+2;
		cout<<*it<<" ";
	}

	cout<<endl;

	return 0;
}
