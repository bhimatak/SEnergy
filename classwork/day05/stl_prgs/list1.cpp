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
#include <list>

using namespace std;

int main()
{

	list<int> list1 = {1,2,3,4,5};
	list<int> list2 ;//= {6,7,8,9,10};
	int val;
	cin>>val;
	list1.push_back(val);

	list<int>::iterator it;
	it = list1.begin();
	it++;
	list1.insert(it,2,100);

	//list1.splice(list1.begin(),list2);	
	for(auto& ele: list1)
		cout<<ele<<" ";
	cout<<endl;

	cout<<list2.size()<<endl;
	for(int i=0;i<10;i++)
		list2.push_front(i*2);

	for(auto&ele : list2)
		cout<<&ele<<" ";
	cout<<endl;
	cout<<list2.size()<<endl;


	return 0;

}


