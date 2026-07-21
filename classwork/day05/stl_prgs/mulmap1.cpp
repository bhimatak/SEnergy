#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<string, int> MultiMap;

	MultiMap.insert(make_pair("Amit",100));
	MultiMap.insert(make_pair("Amit",101));
	MultiMap.insert(make_pair("Amit",102));
	MultiMap.insert(make_pair("Shamita",100));
	MultiMap.insert(make_pair("Rahul",101));
	MultiMap.insert(make_pair("Rohit",200));

	for(auto &ele: MultiMap)
		cout<<"First : "<<ele.first<<"\tSecond :"<<ele.second<<endl;

	auto range = MultiMap.equal_range("Amit");

	for(auto it = range.first; it != range.second; it++)
		cout<<it->first<<"\t"<<it->second<<endl;

	cout<<MultiMap.count("Amit");

	auto pair = MultiMap.find("amit");
	cout<<pair->first<<"\t"<<pair->second<<endl;

	return 0;

}

