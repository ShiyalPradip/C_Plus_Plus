#include<conio.h>
#include<iostream.h>

class Two;
class Three;

class One
{
	int Num1;

	public:
		void Get()
			{
				cout<<"Enter Data:- ";
				cin>>Num1;
			}

		friend void Min(One,Two,Three);
}Data1;

class Two
{
	int Num2;

	public:
		void Get()
			{
				cout<<"Enter Data:- ";
				cin>>Num2;
			}

		friend void Min(One,Two,Three);
}Data2;

class Three
{
	int Num3;

	public:
		void Get()
			{
				cout<<"Enter Data:- ";
				cin>>Num3;
			}

			friend void Min(One,Two,Three);
}Data3;

void Min(One X,Two Y,Three Z)
{
	if(X.Num1<Y.Num2 && X.Num1 < Z.Num3 )
		{
			 cout<<X.Num1<<" Is Min";
		}
	else if(Y.Num2<X.Num1 && Y.Num2 < Z.Num3)
		{
			 cout<<Y.Num2<<" Is Min";
		}
	else
		{
			cout<<Z.Num3<<" Is Min";
		}
}

void main()
{
 clrscr();
	Data1.Get();
	Data2.Get();
	Data3.Get();

	Min(Data1,Data2,Data3);
 getch();
}