#include<iostream>
using namespace std;
class unary
{
	int num;
	public:
		unary(int n)
		{
			num=n;
		}
		
		void operator --()
		{
			num--;
		}
		void display()
		{
			cout<<"The number is : "<<num;
		}
};

int main()
{
	unary u1(45);
	--u1;
	u1.display();
	return 0;
}
