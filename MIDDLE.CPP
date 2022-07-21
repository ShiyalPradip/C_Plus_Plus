#include<iostream.h>
#include<conio.h>
class One
{
	int Num1;

	public:
		void Get()
			{
				cout<<"Enter Data:- ";
				cin>>Num1;
			}

		friend void Middle(One,Two,Three);
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

		friend void Middle(One,Two,Three);
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

		friend void Middle(One,Two,Three);
}Data3;

void Middle()
{

}