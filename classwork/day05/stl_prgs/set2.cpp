#include <iostream>
#include <set>

using namespace std;

class Person{
	public:
		int age;
		string name;

		bool operator < (const Person& rhs) const { return age<rhs.age ; }
		bool operator > (const Person& rhs) const { return age>rhs.age ; }
};

int main()
{
	set<Person> S = {{30,"Mahima"},{25,"Sreya"},{22,"Amalesh"},{33,"Mahima"}};
	for(const auto& e: S)
		cout<<e.age<<"\t"<<e.name<<endl;
	
	cout<<endl;

	return 0;

}
