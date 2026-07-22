#include <iostream>
#include <map>
#include <string>
using namespace std;

class Employee {
public:
    int    id;
    string name;
    double salary;

    Employee(int id, string name, double salary)
        : id(id), name(move(name)), salary(salary) {}

    void display() const{
        cout<<"\nEmployee Details"<<endl;
        cout<<"\nID: "<<id;
        cout<<"\nName: "<<name;
        cout<<"\nSalary: "<<salary<<endl;
    }
};

class CompClass
{
public:
    bool operator()(const Employee &e1, const Employee &e2) const
    {
        return (e1.name < e2.name);
    }
};

int main()
{
    map<Employee,int, CompClass> mEmp;
    mEmp.insert({Employee(103,"xbc3",10003.1), 103});
    mEmp.insert({Employee(101,"abc1",10001.1),101});
    mEmp.insert({Employee(102,"zbc2",10002.1),102});
    

    for(auto const &e : mEmp)
    {
        e.first.display();
        cout<<e.second<<endl;
    }

    return 0;
}