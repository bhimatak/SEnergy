#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	for(int i=0;i<32;i++)
	{
		v.push_back(i+1);
		cout<<v.size()<<"\t"<<v.capacity()<<endl;
	}
	
	return 0;
}
