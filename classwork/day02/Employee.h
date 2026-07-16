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
    int input_details();
    void dispEmp();
};