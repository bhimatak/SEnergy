#include <iostream>
#include <map>
#include <iterator>

using namespace std;

class Employee
{
    int id;
    string name;
public:
    Employee(int id, string name): id(id), name(name){}

    void display() const{ cout<<"\nEmployee Details are\n ";
    
    cout<<"\nID: "<<id<<endl;
    cout<<"\nName: "<<name<<endl;

    }

};

int main()
{
    map<int, Employee> employees;

    for(int i=0;i<3;i++)
    {
        int id;
        string name;
        cout<<"\nID: ";
        cin>>id;
        cout<<"\nName: ";
        cin>>name;
        //Employee e1(id,name);
        employees.emplace(id,Employee(id,name));
    }

    for(auto const &[k,v]: employees)
    {
        cout<<"EmpNo: "<<k<<"\t";
        v.display();
    }

    map<int, Employee>::iterator it;
    for(it = employees.begin(); it!=employees.end();it++)
    {
        cout<<it->first<<"\t";
        it->second.display();
    }
    return 0;
}