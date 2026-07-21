#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int sumOdd=0, sumEven=0;
	for(int i=0;i<100;i++)
		v.push_back(i+1);
	for(int i=0;i<100;i++)
	{
		if(v[i]%2 == 0)
			sumEven += v.at(i);
		else
			sumOdd += v.at(i);
	}

	cout<<"\nSum of Odd = "<<sumOdd<<"\nSum of Even = "<<sumEven<<endl;
	cout<<"\nFront Element ="<<v.front()<<endl;
	cout<<"\nBack Element ="<<v.back()<<endl;

	for(int i=0;i<100;i++)
		cout<<v.at(i)<<" ";
	cout<<endl;

	cout<<"Before Size v="<<v.size()<<endl;
	//cout<<v.begin()<<" "<<v.back()<<endl;
	//v.clear();
	//cout<<"After Size v="<<v.size()<<endl;
	//v.erase(v.begin()+9, v.begin()+19);
	
	//v.insert(v.begin(),20,200);
/*
	int a[]={100,200,300,400,500};

	v.insert(v.begin()+3,a,a+3);
	for(int i=0;i<v.size();i++)
		cout<<v.at(i)<<" ";
	cout<<endl;
*/	
	int i=99;
	cout<<"v.empty = "<<v.empty()<<endl;
	while(!v.empty())
	{
		cout<<"Poped element = "<<v.at(i)<<endl;
		v.pop_back();
		i--;
	}

	cout<<"SIze of v="<<v.size()<<endl;
	cout<<"v.empty = "<<v.empty()<<endl;



	return 0;
}
