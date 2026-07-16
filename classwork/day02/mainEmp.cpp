#include <iostream>
#include <Employee.h>

using namespace std;

int main()
{
    Employee e1;
    e1.input_details();
    e1.dispEmp();

    e1.set_e_name("Bhimashankar");
    e1.dispEmp();

    cout<<"Address: "<<e1.get_e_addr()<<endl;

    Employee e2=e1;

    e2.dispEmp();

    cout<<"\nAddress of e1: "<<&e1<<endl;
    cout<<"\nAddress of e2: "<<&e2<<endl;


    return 0;
}