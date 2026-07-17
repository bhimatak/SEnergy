/*

Inheritence

*/

#include <iostream>

using namespace std;

class Person{
protected:
    string name;
    char g;
    int age;
public:
    Person(): name("Unknown"), g('U'), age(0){ cout<<"\nPerson Default\n";}
    Person(const string name, char g, int age)
    {
        this->name = name;
        this->g = g;
        this->age = age;
    }
    //: name(name),g(g),age(age){
    string getName(){ return name;}
    void setName(string name) { this->name = name; }
    
    char getGender() { return g;}
    void setGender(char g) { this->g = g; }

    int getAge() { return age;}
    void setAge(int age) { this->age = age;}
    
    void printPerson()
    {
        cout<<"\nPerson Details"<<endl;
        cout<<"\nName: "<<this->name;
        cout<<"\nAge: "<<age;
        cout<<"\nGender: "<<g<<endl;
    }
};

class Employee : public Person
{
protected:
    int e_num;
    float salary;
public:
    Employee(): e_num(0), salary(0.0) {cout<<"\nEmployee Default\n";}
    Employee(const string n, char g, int age, int eno, float sal):Person(n,g,age), e_num(eno), salary(sal){}

    int getENum() { return e_num;}
    void setENum(int num) { e_num = num;}

    float getSal() {return salary;}
    void setSal(float sal) { salary = sal; }
    
    void PrintEmp() {
        printPerson();
        cout<<"\nEmployee Details"<<endl;
        cout<<"\nEmpNo: "<<e_num<<endl;
        cout<<"\nSalary: "<<salary<<endl;
    }


};


int main()
{
   // Person p("xyz", 'm',40);
    Employee e("xyz",'m',40,101,10000.1);
    //p.printPerson();
    e.PrintEmp();

    return 0;
}