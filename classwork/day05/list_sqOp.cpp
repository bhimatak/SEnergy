#include <iostream>
#include <list>
#include <iterator>

using namespace std;

class MyList
{
private:
    list<int> data;

public:
    void push_back(int value)
    {
        data.push_back(value);
    }

    int& operator[](size_t index)
    {
        list<int>::iterator it = data.begin();

        advance(it, index);

        return *it;
    }

    const int& operator[](size_t index) const
    {
        list<int>::const_iterator it = data.begin();

        advance(it, index);

        return *it;
    }
};

int main()
{
    MyList numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    cout << numbers[2] << endl;

    numbers[2] = 100;

    cout << numbers[2] << endl;

    return 0;
}