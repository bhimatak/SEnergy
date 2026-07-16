#pragma once

/*
name
no
gender
phone
addr


*/
#include <iostream>
//using namespace std;
class Employee
{
protected:
    int e_number;
    int e_phone;
    char e_gender;
    std::string e_name;
    std::string e_addr;
public:
    Employee(); //default constr
    Employee(Employee &);
    ~Employee();

    int input_details();
    void dispEmp();

    std::string get_e_addr() { return e_addr; }

    std::string get_e_name() { return e_name; }
    void set_e_name(const std::string s) { e_name = s; }

};