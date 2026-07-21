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

    void display()
    {
        cout<<"\nID: "<<id<<"\nName: "<<name<<endl;
    }

};

int main()
{
    Employee e(10,"abc");
    vector <Employee> ev;
    //ev.reserve(10); fixed size of vector
    ev.push_back(e);

    ev.emplace_back(10,"bhima");

    for (auto emp: ev){
        emp.display();
    }

    
}