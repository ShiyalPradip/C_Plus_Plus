#include<iostream.h>
#include<conio.h>

class Class_Two;
class Class_One
{
	int Num1;

	public:
		void Get_Data()
			{
				cout<<"Enter Data:- ";
				cin>>Num1;
			}

		friend void Max_Num(Class_One,Class_Two);

}Data1;

class Class_Two
{
	int Num2;

	public:
		void Get_Data()
			{
				cout<<"Enter Data:- ";
				cin>>Num2;
			}

		friend void Max_Num(Class_One,Class_Two);

}Data2;

void Max_Num(Class_One One,Class_Two Two)
{
	if(One.Num1>Two.Num2)
		{
			cout<<One.Num1<<" Is Max";
		}
	else if(One.Num1<Two.Num2)
		{
			cout<<Two.Num2<<" Is Max";
		}
	else
		{
			cout<<"\nBoth Are Same";
		}
}

void main()
{
 clrscr();
	Data1.Get_Data();
	Data2.Get_Data();

	Max_Num(Data1,Data2);
 getch();
}