/*
Pointers

dt *ptrName;

int *ptr;
char *name;

char addr[20] = "bangalore";

name = &addr[0];

int a=10;
double d=20.22;
int *p = &d;

1. op[] => *op
2. &* => nullify each other
    &*op => op

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double arr[3] = {10.22,30.3,40.4};

    //double *ptr = &arr[0]; //BA of array
    double *ptr = arr; //BA of array


    printf("\nBA of array = %u\n",&arr[0]);
    printf("\nBA of array = %u\n",arr);
    printf("\n1st  element array = %f\n",arr[0]);
    printf("\n1st  element array = %f\n",*arr);
    
    
    /*
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr--;
    cout<<*ptr<<endl;
    */

    ptr = &arr[0];
    cout<<*(ptr+0)<<endl;

    return 0;
}