#include<iostream>
#include<string>
using namespace std;

class demo
{
	public:
	void display(int id)
	{
		cout<<"Function-1"<<endl;
		cout<<id<<endl;
	}
	
	void display(string job_roll)
	{
		cout<<"Function-2"<<endl;
		cout<<job_roll<<endl;
	}
	
	void display(double stipend)
	{
		cout<<"Function-3"<<endl;
		cout<<stipend<<endl;
	}
};

int main()
{
	demo d1;
	d1.display(1159);
	d1.display("Graphikos");
	d1.display(15000.00);
	return 0;
}
