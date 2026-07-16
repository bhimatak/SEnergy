/*
Fuction: 

inline functions
functions

1. function no args
2. function with args
3. functio with no args but rt


rDT name_function(dt args)
{
    //st
    return dtVal
}


SF

calling address => address of function 4000
return address =>5002

int *arr=BA, int cap=5

int i

st




storage class
1. register
2. auto
3. static


*/

#include <iostream>

using namespace std;

int gVal =100;
void display(int *arr, int cap)
{
    static int val=100;
    for(register int i=0;i<cap;i++)
        cout<<arr[i]<<endl;
    val +=101;
}
void disp()
{
    cout<<"Welcome"<<endl;
}

int sumValues(int arr[], int cap)
{
    int sum = 0;
    for(register int i=0;i<cap;i++)
        sum +=arr[i];

    return sum;
}




int main()
{
    int arr[] = {1,2,3,4,5};
    display(arr,5); //5000

    display(arr,5);// 5001
    disp();

    int Sum = sumValues(arr, 5); //5003
    
    cout<<Sum<<endl;

    return 0; //5002

}