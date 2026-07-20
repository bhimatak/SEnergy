#include <iostream>
#include <vector>

using namespace std;

class Employee
{
    int id;
    string name;
public:
    Employee(): id(0), name("unkown"){}
    Employee(int id, string name): id(id), name(name){}


};

int main()
{
    Employee e(10,"abc");
    vector <Employee> ev;
    
    ev.push_back(e);

    ev.emplace(10,"xyz");
}