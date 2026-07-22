/*
namespace
*/

#include <iostream>

using namespace std;

namespace dispM
{
    void display()
    {
        cout<<"\nDisplay M"<<endl;
    }

    namespace nest1{
        void display()
        {
            cout<<"\nNest Disp"<<endl;
        }
    }
} // namespace dispM


namespace dispM
{
    void display1()
    {
        cout<<"\nDisplay P"<<endl;
    }
}
// void display()
// {
//         cout<<"\nDisplay G"<<endl;
// }



int main()
{
    using namespace dispM;
    display();
    //f1();
    display1();

    nest1::display();

    return 0;
}

