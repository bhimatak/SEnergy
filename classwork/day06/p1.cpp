/*
maps
*/

#include <iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int> Marks;

    Marks["Science"] = 70;
    Marks["Maths"] = 75;
    Marks["English"] = 71;


    for(auto const ele: Marks)
    {
        cout<<ele.first<<"\t"<<ele.second<<endl;
    }

    Marks["Social"] = 56;
    for(auto const ele: Marks)
    {
        cout<<ele.first<<"\t"<<ele.second<<endl;
    }

    cout<<Marks["Social"]<<endl;

    for(auto const& [k,v]: Marks)
    {
        cout<<k<<"\t"<<v<<endl;
    }

    return 0;
}

/*
Q.

Write a program using maps to assioicate Employee class with the key value assigned to the 
Employee number

memp[10101].objName.print()

Employee e;
e.display();
*/