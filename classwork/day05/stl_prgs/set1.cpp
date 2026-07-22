#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> S={6, 1,2,3,4,5,2,4,1};
	//set<int> S={5,4,3,2,1};

	for(const auto& e: S)
		cout<<e<<" ";
	
	
	
	cout<<endl;

	return 0;

}
