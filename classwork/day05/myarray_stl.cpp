#include <iostream>
#include <array>
#include <cstring>
using namespace std;


int main()
{
	array<int, 3> a = {10,20,30};
	array<int, 3> b = {40,50,60};
	for(int i=0;i<3;i++)
		cout<<a.at(i)<<" ";
	cout<<endl;
	for(int i=0;i<3;i++)
		cout<<b.at(i)<<" ";

	a.swap(b);
	cout<<"after swap\n";
	for(int i=0;i<3;i++)
		cout<<a.at(i)<<" ";
	cout<<endl;
	for(int i=0;i<3;i++)
		cout<<b.at(i)<<" ";

	cout<<endl;
	cout<<a.empty()<<endl;
	cout<<a.size()<<endl;
	for(int i=0;i<3;i++)
		cout<<a.at(i)<<" ";
	cout<<endl;
	array<int, 0> myarray;
	cout<<myarray.empty()<<endl;
	cout<<a.max_size()<<endl;





	return 0;
}
