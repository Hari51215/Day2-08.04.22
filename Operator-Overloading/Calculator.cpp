#include<iostream>
using namespace std;

class calculator
{
    int value;
    public:
        calculator()
        {
            value=0;
        }

        calculator (int num)
        {
            value=num;
        }

        calculator operator + (const calculator &obj)
        {
            calculator temp;
            temp.value=value+obj.value;
            return temp;
        }

        calculator operator - (const calculator &obj)
        {
            calculator temp;
            temp.value=value-obj.value;
            return temp;
        }

        calculator operator * (const calculator &obj)
        {
            calculator temp;
            temp.value=value*obj.value;
            return temp;
        }

        calculator operator / (const calculator &obj)
        {
            calculator temp;
            temp.value=value/obj.value;
            return temp;
        }

        calculator operator % (const calculator &obj)
        {
            calculator temp;
            temp.value=value%obj.value;
            return temp;
        }
        friend ostream &operator << (ostream &op,calculator &obj);
};

ostream &operator << (ostream &op,calculator &obj)
{
    op<<obj.value<< endl;
    return op;
}

int main ()
{
    int a,b,choice=1;
    cout<<"Enter the First number : "<<endl;
    cin>>a;
    cout<<"Enter the Second number : "<<endl;
    cin>>b;

    calculator c1(a),c2(b),c3;

    while (choice)
    {
        cout<<"Available Calculator Operation are below :"<<endl;
        cout<<"1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n5.Modulus.\n0.Switch off the calculator:"<<endl;
        cout<<"Enter your choice to begin the calculator operation : "<<endl;
        cin>>choice;

        switch(choice)
        {
        case 0: 
            cout<<"Calculator Switches Off "<<endl;
            exit (0);
        case 1:
            c3=c1+c2;
            break;
        case 2:
            c3=c1-c2;
            break;
        case 3:
            c3=c1*c2;
            break;
        case 4:
            c3=c1/c2;
            break;
        case 5:
            c3=c1%c2;
            break;
        default:
            cout << "Invalid Choice ... !\nKindly choose the Available operations only"<<endl;
            exit (0);
        }
    cout<<"Operation Performed : "<<choice<<", The result is : "<<c3<<endl;
    }
    return 0;
}