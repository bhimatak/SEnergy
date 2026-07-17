/*

Para Constructor

*/

#include <iostream>

using namespace std;

class Rectangle
{
    int x,y;
    float z;

public:
    Rectangle(): x(0), y(0){
        cout<<"\nDefault"<<endl;
        //x=0;
        //y=0;
    }

    Rectangle(Rectangle &r)
    {
        cout<<"\nCopy"<<endl;
        this->x =r.x+10;
        y =r.y+10; 
    }

   /* Rectangle(int v1, int v2) : x(v1), y(v2)
    {
        cout<<"\nPara"<<endl;
       // x = v1;
       // y = v2;
       z=0.0;
    }*/

    Rectangle(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void setValues(int v1, int v2){
        x = v1;
        y = v2;
    }
    void print(){ cout<<x<<endl<<y<<endl;}


};


int main()
{
    Rectangle r1;
    r1.setValues(10,20);
    r1.print();

    Rectangle r2(r1);

    r2.print();

    Rectangle r3(33,44);
    r3.print();

}