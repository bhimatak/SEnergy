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

using namespace std;

int main()
{
	map<string, int, less<>> Map;

	Map["rohit"] = 444444;
	Map["Benita"] = 333333;

	Map.insert(make_pair("rohit",55555));

	for(auto &ele : Map)
		cout<<"Key = "<<ele.first<<"\tValue = "<<ele.second<<endl;

	cout<<Map["Benita"]<<endl;
	cout<<Map.size();
	cout<<endl;
	
	cout<<Map["benita"]<<endl;
	cout<<Map.size();
	cout<<endl;
	for(auto &ele : Map)
		cout<<"Key = "<<ele.first<<"\tValue = "<<ele.second<<endl;


	return 0;
}
