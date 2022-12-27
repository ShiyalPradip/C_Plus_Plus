#include<iostream.h>
#include<conio.h>
class Swap
{
	int Temp;
	public:

	void swap(int x,int y)
		{
			Temp=x;
			x=y;
			y=Temp;

			cout<<"Num1 :- "<<x;
			cout<<"Num2 :- "<<y;
		}
};

void main()
{
	Swap Data;
	int Num1,Num2;
 clrscr();
	cout<<"Enter Num 1:- ";
	cin>>Num1;

	cout<<"Enter Num 2:- ";
	cin>>Num2;

	Data.swap(Num1,Num2);
 getch();
}
