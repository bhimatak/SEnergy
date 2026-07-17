/*
Polymorphism
*/

#include <iostream>

using namespace std;

class Animal //ABC
{
// int a;
public:
   virtual void speak() = 0;
};

class Dog: public Animal
{
public:
   void speak1() {
        cout<<"\nBarks1"<<endl;
    }
    void speak() {
        cout<<"\nBarks"<<endl;
    }
};

class Cat: public Animal
{
public:
    void speak() {
        cout<<"\nMeow"<<endl;
    }
};


int main()
{
    Dog d;
    d.speak();

    Animal *BCptr = nullptr;
    
    BCptr = &d;
    cout<<"\n======\n";
    BCptr->speak();

    Animal a;
    

    return 0;
}

