#include<iostream>
using namespace std;
class unary
{
	int num;
	public:
	    unary ()
	    {
	        num=0;
	    }
	
		unary(int n)
		{
			num=n;
		}
		
		unary operator --()
		{
		    unary temp;
			temp.num=--num;
			return temp;
			
		}
		void display()
		{
			cout<<"The number is : "<<num;
		}
};

int main()
{
	unary u1(45),u2;
	u2=--u1;
	u2.display();
	return 0;
}
