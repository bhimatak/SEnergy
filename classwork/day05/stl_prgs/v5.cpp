//Demo of range based for loop method
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = {10,20,30,40,50};

	for(int value : v)
		cout<<value <<" ";
	cout<<endl;

	return 0;
}
