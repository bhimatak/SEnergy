/*
	
	map: stl 

	map<T1, T2> obj;
	T1=> key type -> unique
	T2 => value type
	key-value combination => associative container
	values are overridden
	- self banalced tree
*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<int>, less<>> Map;

	Map["rohit"].push_back(444444);
	Map["Benita"].push_back(333333);
	Map["rohit"].push_back(55555);


	for(auto &ele1 : Map){
		cout<<"Key = "<<ele1.first;
		for(auto &ele2: ele1.second)
			cout<<"\tValue = "<<ele2;
		cout<<endl;
	}	

	cout<<endl;

	return 0;
}
