#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	arr.reserve(10);
	for(int i=0;i<100;i++){
		arr.push_back(i);
		cout<<"Size = "<<arr.size()<<"\t"<<"Cap = "<<arr.capacity()<<endl;
	}
	cout<<endl;
	return 0;
}
