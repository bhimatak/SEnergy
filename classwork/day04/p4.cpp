/*
static members and functions of class
*/
#include <iostream>

using namespace std;

class Accounts{
public:
    static int objAccNo;
private:
    int accNo;
    string name;
public:
    Accounts()
    {
        objAccNo +=1;
        name = "Unknown";
        accNo = objAccNo;
    }

    Accounts(const string name)
    {
        accNo+=1;
        this->name = name;
    }

    string get_name() { return name;}
    int get_accNo() { //objAccNo = 0;
         return accNo;  }
    static int resetAccount() { objAccNo = 0; return objAccNo;}


};

int Accounts::objAccNo = 0;

int main()
{
    Accounts a1("abc");
    Accounts a2("xyz");
    cout<<"No of accounts: "<<Accounts::objAccNo<<endl;
    cout<<"accountNo: "<<a1.get_accNo()<<endl;
    cout<<"accountNo: "<<a2.get_accNo()<<endl;
    a1.resetAccount();
    cout<<"No of accounts: "<<Accounts::objAccNo<<endl;
    
    return 0;
}