#include <iostream>
#include <memory>

using namespace std;

class Rect
{
    int h;
    int w;
public:
    Rect(int h, int w): h(h),w(w){}
    void printArea(){ cout<<"\nArea="<<(h*w)<<endl;}
};

void func(shared_ptr<Rect> p)
{
    p->printArea();
    cout<<"\nIn Function: ";
    cout<<p.use_count()<<endl;
    
}

int main()
{
    //Rect *r1 = new Rect(10,4);
    unique_ptr<Rect> P1(new Rect(3,4));
    
    P1->printArea();

    //unique_ptr<Rect> P2(r1);
    unique_ptr<Rect> P2;

    // P2 = move(P1); // ownership changed from p1 to p2
    
    // P2->printArea();
    // cout<<"\nP1"<<endl;
    // P1->printArea();

   /* int *ptr = new int(10);
    int *temp = ptr;
    */


    shared_ptr<Rect> P3(new Rect(5,6));

    P3->printArea();

    cout<<P3.use_count()<<endl;
    
    shared_ptr<Rect> P4(P3);

    P4->printArea();

    cout<<P3.use_count()<<endl;
    
    func(P4);
    cout<<"\nAfter Function call\n";
    cout<<P3.use_count()<<endl;
    


    return 0;
}
