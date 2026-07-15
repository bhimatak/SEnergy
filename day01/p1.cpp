#include <iostream>
#include <strings.h>


#define PI 3.142

using namespace std;

class Employee
{
//properties
public:
    int empNo;
    float empSalary;
    char empName[20];
    std::string empAddr;
    char empGender;
//methods
};

struct Emp
{
    int empNo;

};


int main()
{
    Employee e;
    strcpy(e.empName, "Bhima");
    e.empAddr = "Bangalore";
    e.empGender = 'M';

    cout<<"Size of integer: "<<sizeof(long int)<<endl;

    cout<<PI<<endl;
    /*
    switch(cond)
    {
        default:
                st
                break;
        case 1:
        case 'A':
                //st
                break;
        case 2: 
                //st;
                break;
        
    }

    */
    

}