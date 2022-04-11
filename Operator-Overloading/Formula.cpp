#include<iostream>
using namespace std;
class formula
{
    private:
		int num;
	public:
		formula()
		{
			num=0;
		}
		formula(int num):num(num){}
		
		formula operator * (const formula &obj)
		{
			formula temp;
			temp.num = num * obj.num;
			return temp;
		}
		
		formula operator + (const formula &obj)
		{
			formula temp;
			temp.num = num + obj.num;
			return temp;
		}
		
		void display()
		{
			cout<<"The Answer of the formula (a+b)^2 = " << num << endl;
		}
};


int main()
{
	formula f1(5);
	formula f2(4);
	formula f3(2);
	formula obj1;
	obj1=(f1*f1) + (f2*f2) + (f1*f2*f3);
	obj1.display();
}
