#include<iostream>
using namespace std;

class add
{
	public:
		void sum(int a,int b)
		{
			cout<<"Addition of Two Numbers :"<<a+b<<endl;
		}
		
		void sum(int a,int b,int c)
		{
			cout<<"Addition of Three Numbers :"<<a+b+c<<endl;
		}
};

class sub
{
	public:
		void diff(int a,int b)
		{
			cout<<"Subtraction of Two Numbers :"<<a-b<<endl;
		}
		
		void diff(int a,int b,int c)
		{
			cout<<"Subtraction of Three Numbers :"<<a-b-c<<endl;
		}
};

int main()
{
	add a1;
	a1.sum(10,20);
	a1.sum(10,20,30);
	sub s1;
	s1.diff(20,10);
	s1.diff(30,20,10);
	return 0;
}
