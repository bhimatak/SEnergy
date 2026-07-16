#include <iostream>
#include <strings.h>

using namespace std;

typedef struct Employee
{
    int empno;
    char empname[20];
}EMP;



void display(const EMP e)
{
    cout<<e.empno<<"\n"<<e.empname<<endl;

    e.empno = 2001;

}



void printDetails(EMP *e)
{
    cout<<e->empno<<"\n"<<e->empname<<endl;

    e->empno = 2001;

}

void printDetails1(EMP &e)
{
    cout<<e.empno<<"\n"<<e.empname<<endl;

    e.empno = 2001;

}


void disp(const char *str1)
{
    cout<<"\nstr1= "<<str1<<endl;
}

int main()
{
    EMP e1 = {101,"bhima"};

    cout<<e1.empno<<"\n"<<e1.empname<<endl;

    EMP e2;

    cout<<"\nEnter Emp 2 details: ";
    cin>>e2.empno>>e2.empname;
    cout<<e2.empno<<"\n"<<e2.empname<<endl;

    EMP e3;

    cout<<"\nEnter Emp 3 details: ";
    cin>>e3.empno>>e3.empname;
    printDetails(&e3);
    cout<<e3.empno<<"\n"<<e3.empname<<endl;


    EMP e4;

    cout<<"\nEnter Emp 4 details: ";
    cin>>e4.empno>>e4.empname;
    printDetails1(e4);
    cout<<e4.empno<<"\n"<<e4.empname<<endl;

    disp("bhima");

    return 0;
}
