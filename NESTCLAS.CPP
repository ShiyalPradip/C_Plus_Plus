#include<iostream.h>
#include<conio.h>

class Class1
{
	public:
		int Num1;
};

class Class2
{
	Class1 Data;
	public:
		Class2(int No){

			Data.Num1=No;

			cout<<"Num1 :- "<<Data.Num1;
		}
};

void main()
{
 clrscr();
	Class2 Data2(5);
 getch();
}