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

}