/*

Pointers

1. null pointer
2. wild pointer
3. dangling pointer
4. void pointer / generic pointer


*/

#include <iostream>

using namespace std;


int *rValue(int s)
{
    static int ret=0; //3000
    cout<<ret<<endl;
    ret +=s;

    return &ret;
}

int main()
{
    int *ptr; //wild pointer
    int *ptr1 = nullptr; // null pointer. int *ptr = NULL;

    //*ptr = 10; //(void  *)0

    void *ptr2=nullptr; //generic ptr

    ptr1 = rValue(10);

    *ptr1 = 101;

    rValue(20);

    {
        int a=10;
    }


    return 0;


}