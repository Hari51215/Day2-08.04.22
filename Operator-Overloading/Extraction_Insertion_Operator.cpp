#include<iostream>
#include<string>
using namespace std;

class employee
{
    string name;
    double salary;
    int id;
    
    public:
        employee()
        {
            name="NULL";
            id=0;
            salary=0;
        }
        friend ostream &operator << (ostream &op,employee &emp);
        friend istream &operator >> (istream &ip,employee &emp);
};

ostream &operator << (ostream &op,employee &emp)
{
    op<<"Employee Name : "<<emp.name<<"\nEmployee ID : "<<emp.id<<"\nEmployee Salary : "<<emp.salary<<endl;
    return op;
}

istream &operator >> (istream &ip,employee &emp)
{
    ip>>emp.name>>emp.id>>emp.salary;
    return ip;
}

int main()
{
    cout<<"Enter the Employee details :"<<endl;
    employee ram;
    cout<<"Enter the Employee Name / ID / Salary :";
    cin>>ram;
    cout<<ram;
}