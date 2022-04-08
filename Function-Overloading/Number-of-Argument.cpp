#include<iostream>
using namespace std;

class test
{
	public:
	void print(int a)
	{
		cout<<"Function-1"<<endl;
		cout<<a<<endl;
	}
	
	void print(int a,int b)
	{
		cout<<"Function-2"<<endl;
		cout<<a<<" "<<b<<endl;
	}
	
	void print(int a,int b,int c)
	{
		cout<<"Function-3"<<endl;
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
};

int main()
{
	test t1;
	t1.print(1);
	t1.print(1,10);
	t1.print(1,10,100);
	return 0;
}
