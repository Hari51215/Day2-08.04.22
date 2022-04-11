#include<iostream>
using namespace std;

class conversion
{
	int num;
	public:
		conversion()
		{
			num=0;
		}
		
		conversion(int ms)
		{
			num=ms;
		}
		
		conversion operator / (const conversion &obj1)
		{
			conversion temp;
			temp.num=num/obj1.num;
			return temp;
		}
		
		conversion operator * (const conversion &obj1)
		{
			conversion temp;
			temp.num=num*obj1.num;
			return temp;
		}
		
		void print()
		{
			cout<<"The conversion value :"<<num<<endl;	
		}
};

int main()
{
	int ms;
	cout<<"Enter the value in meter/second to convert as kilometer/hour :";
	cin>>ms;
	conversion c1(ms),c2(18),c3(5),c4;
	c4=c1*c2/c3;
	c4.print();
	return 0;
}
