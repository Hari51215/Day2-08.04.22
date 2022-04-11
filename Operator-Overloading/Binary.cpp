#include<iostream>
using namespace std;
class binary
{
    public:
	int value;
	
		binary()
		{
			value=0;
		}
		binary(int num)
		{
			value=num;
		}
		binary operator + (binary &obj)
		{
			binary temp;
			temp.value = value + obj.value;
			return temp;
		}
		
		
		void print()
		{
			cout<<"The Value =" << value << endl;
		}
};


int main()
{
	binary b1(100);
	binary b2(200);
	binary obj1;
	obj1=b1+b2;
	b1.print();
	b2.print();
	obj1.print();
}
