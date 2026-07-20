#include <iostream>

using namespace std;

class myArray
{
private:
    int *arr;
    int Cap;
public:
    myArray()
    {
        arr = new int[1];
        Cap = 1;
    }
    myArray(int cap)
    {
        arr = new int[cap];
        Cap = cap;
    }

    void assignValues()
    {
        cout<<"\nEnter "<<Cap<<" Values of array\n";
        for(int i=0;i<Cap;i++)
            cin>>arr[i];
    }

    void dispArr()
    {
        cout<<"\nArrays are\n";
        for(int i=0;i<Cap;i++)
            cout<<arr[i]<<"\t";
        cout<<endl;
    }

    void sortAsc()
    {
        for(int i=0;i<Cap;i++)
        {
            for(int j=i;j<Cap;j++)
            {
                if(arr[j]>arr[i])
                {
                    //swap
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
private:
    void swapNum(int &x, int &y)
    {
        int t = x;
        x = y;
        y = t;
    }
};

int main()
{
    myArray A(5);

    A.assignValues();
    A.dispArr();
    A.sortAsc();
    A.dispArr();
    
    return 0;
}