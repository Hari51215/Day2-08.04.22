#include<iostream>
#include<string>
using namespace std;

class order
{
	public:
	void showdata(int id,string job_roll,double stipend)
	{
		cout<<"Function-1"<<endl;
		cout<<id<<" "<<job_roll<<" "<<stipend<<endl;
	}
	
	void showdata(string job_roll,int id,double stipend)
	{
		cout<<"Function-2"<<endl;
		cout<<job_roll<<" "<<id<<" "<<stipend<<endl;
	}
	
	void showdata(double stipend,string job_roll,int id)
	{
		cout<<"Function-3"<<endl;
		cout<<stipend<<" "<<job_roll<<" "<<id<<endl;
	}
};

int main()
{
	order o1;
	o1.showdata(1159,"Graphikos",15000.00);
	o1.showdata("Graphikos",1159,15000.00);
	o1.showdata(15000.00,"Graphikos",1159);
	return 0;
}
