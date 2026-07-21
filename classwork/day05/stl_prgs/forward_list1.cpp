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

	forward_list<int> list1 = {3,4,5,6,4,19};
	
	//list1.remove(4);
	list1.remove_if([] (int n) {
		return n>4;
	});
	for(auto&ele : list1)
		cout<<ele<<" ";
	cout<<endl;
		

	return 0;

}


