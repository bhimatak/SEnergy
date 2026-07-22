/*
functor => function as object
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class SumNumber{
int sum;
public:
    SumNumber(): sum(0){}
    int getSum() { return sum; }
    void operator()(int n) { sum += n;}
};

void func1(int n){
    cout<<n<<endl;
}

int func2(int n){
    return (n %2 == 0);
} 

int func4(int &ptr){
    //static int counter;
    return *ptr++*10;
}


//int func3(const auto& a, const auto& b){ return a.first < b.first; }

int main()
{
    /*
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
   // SumNumber res = std::for_each(v.begin(), v.end(),SumNumber());
   // cout<<res.getSum()<<endl;

   std::for_each(v.begin(), v.end(), func1);
    */

    vector<int> v = {1,3,6,5,2,6,8};

    auto it = std::find(v.begin(), v.end(), 6);
    if(it != v.end()){
        cout<<"\nFound"<<endl;
        cout<<distance(v.begin(),it)<<endl;
        }
    else
        cout<<"\nNot Found"<<endl;

    // sort(v.begin(),v.end());
    // for_each(v.begin(), v.end(), func1);
   
    //int arr[10] = {1,2,4,5,6,7,9,3,0};
    
    auto firstEven = find_if(v.begin(), v.end(), func2);
    cout<<*firstEven<<endl;

    int c1 = count(v.begin(), v.end(), 6);
    cout<<"\nCount:"<<c1<<endl;

   int c2 = count_if(v.begin(), v.end(), func2);
    cout<<"\nCountEven:"<<c2<<endl;
    

    sort(v.begin(),v.end(), std::less<int>());
    for_each(v.begin(), v.end(), func1);


    // // stable_sort: preserves relative order of equal elements
    // std::vector<std::pair<int,std::string>> students =
    // {{3,"Alice"},{1,"Bob"},{2,"Carol"},{1,"Diana"},{2,"Eve"}};
    // std::stable_sort(students.begin(), students.end());

    vector <int> fv(8);
    int counter=0;
    std::generate(fv.begin(), fv.end(),func4(counter));
    
    for_each(fv.begin(), fv.end(), func1);

    return 0;

}
