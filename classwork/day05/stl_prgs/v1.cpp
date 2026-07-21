#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> arr(30,20);
	vector<int> arr1 {1,2,3,4,5};

	cout<<arr[2]<<endl;
	cout<<arr.size()<<endl;
	cout<<arr.capacity()<<endl;
	cout<<arr1[2]<<endl;
	cout<<arr1.size()<<endl;
	cout<<arr1.capacity()<<endl;
}
