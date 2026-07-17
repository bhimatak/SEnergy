#include <iostream>

using namespace std;

int main()
{
    int *ptr=nullptr;
    //int a=5;
    //int arr[5];
    int cap;
    cout<<"ENter how many element you need: ";
    cin>>cap;
    ptr = new int[cap];
    int *temp = ptr;
    /*
    cout<<"\nBA of ptr="<<ptr<<endl;
    
    *ptr = 15;
    ptr++;
    *ptr=20;
    ptr++;
    *ptr = 25;
    ptr++;
    *ptr = 30;
    ptr++;
    *ptr = 35;
    */
    for(int i=0;i<cap;i++,ptr++)
    {
        cout<<"\nEnter "<<(i+1)<<" Value = ";
        cin>>*ptr;
    }
    ptr = temp;
    for(int i=0;i<cap;i++,ptr++)
    {    
        cout<<"\nBA of ptr="<<ptr<<endl;
        cout<<"\nValue stored @ "<<ptr<<" = "<<*ptr<<endl;
    }
    delete [] ptr;
    return 0;

}