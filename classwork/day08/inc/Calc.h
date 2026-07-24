#pragma once

class Calc
{
private:
    int v1,v2;
public:
    Calc(): v1(0),v2(0){}
    Calc(int x, int y): v1(x), v2(y){}
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int division(int, int);
    
};