#include<iostream.h>
#include<conio.h>
class Unary
{
	private:
		int Num1,Num2;

	public:
		Unary()
			{
				Num1=100; Num2=200;
			}

		void Put()
			{
				cout<<"Number 1 Is:- "<<Num1<<endl;
				cout<<"Number 2 Is:- "<<Num2;
			}

		void operator ++()
			{
				Num1++;
				Num2++;
			}
}Data;

void main()
{
 clrscr();
	Data++;
	Data.Put();
 getch();
}