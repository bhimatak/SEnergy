/*

forward_list : STL

1. single Linked list
2. we can know the address of the next ele only
3. we can use this class instead of traditional LList
   a. well tested
   b. we have much builtin function to operate on LList
4. Operation:
operator =, assign, front, empty, max_size, clear, insert_after, emplace_after,
reverse, sort, merge, unique, resize, splice_after

header => forward_list
*/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{

	forward_list<int> list1 = {3,4,5,6,19};
	forward_list<int> list2 = {12,22,9,10,1};


//	list1.insert_after(list1.begin(),8);
	//list1.reverse();
	for(auto& ele: list1)
		cout<<ele<<" ";
	cout<<endl;
/*
	list1.sort();
	list2.sort();
*/	
	for(auto& ele: list2)
		cout<<ele<<" ";
	cout<<endl;

/*	list1.merge(list2);

	for(auto&ele : list1)
		cout<<ele<<" ";
	cout<<endl;
*/
	list1.splice_after(list1.begin(), list2);
	for(auto& ele: list1)
		cout<<ele<<" ";
	cout<<endl;
		

	return 0;

}


