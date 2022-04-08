#include<iostream>
#include<string>
using namespace std;

void display(int id)
{
	cout<<"function-1"<<endl;
	cout<<"Employee ID: "<<id<<endl<<endl;
}

void display(string name)
{
	cout<<"function-2"<<endl;
	cout<<"Employee Name: "<<name<<endl<<endl;
}

void display(double salary)
{
	cout<<"function-3"<<endl;
	cout<<"Employee Salary: "<<salary<<endl<<endl;
}

void display(int id,string name,double salary)
{
	cout<<"function-4"<<endl;
	cout<<"Employee ID: "<<id<<endl;
	cout<<"Employee Name: "<<name<<endl;
	cout<<"Employee Salary: "<<salary<<endl<<endl;
}

int main()
{
	display(1159);
	display("Hariharan S");
	display(500.000);
	display(1159,"Hariharan S",500.000);
	return 0;
}
