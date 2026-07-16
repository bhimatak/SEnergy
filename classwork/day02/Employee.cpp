#include <iostream>
#include <Employee.h>

using namespace std;

int Employee::input_details()
{
    cout<<"\nEnter the detailes of the Employee: "<<endl;
    cout<<"\nName : ";
    cin>>e_name;
    cout<<"\nEmpNo: ";
    cin>>e_number;
    cout<<"\nPhone: ";
    cin>>e_phone;
    return EXIT_SUCCESS;
}

void Employee::dispEmp()
{
    cout<<"\nDetailes of the Employee: "<<endl;
    cout<<"\nName : "<<e_name;
    cout<<"\nEmpNo: "<<e_number;
    cout<<"\nPhone: "<<e_phone;
    cout<<"\nGender: "<<e_gender;
    cout<<"\nAddr: "<<e_addr<<endl;

}

Employee::Employee()
{
    cout<<"\nDefault Constructor getting called\n";
    e_addr ="Unknown";
    e_name ="Unknown";
    e_phone = 0;
    e_number = 1;
    e_gender = 'U';
}

Employee::Employee(Employee &e)
{
    cout<<"\nCopy Constructor getting called\n";
    
    e_name = e.e_name;
    e_gender = e.e_gender;
    e_addr = "ABCDE";
    e_number = 9;
    e_phone = e.e_phone;
}

Employee::~Employee()
{
    cout<<"\nDestructor called\n";
}