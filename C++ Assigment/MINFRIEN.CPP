/*

|---------------------------------------------------------------------------|
		Write a C++ Programe To Find Minimum Value Frome Deferent Classes
									Using Friend Function
|---------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<conio.h>

class Two;

class One
{
	int Num1;

	public:
		void Get_Data1()
			{
				cout<<"Enter a Number:- ";
				cin>>Num1;
			}

		friend void Minimum_Number(One,Two);

}Data1;

class Two
{
	int Num2;

	public:
		void Get_Data2()
			{
				cout<<"\nEnter a Number:- ";
				cin>>Num2;
			}

		friend void Minimum_Number(One,Two);

}Data2;

void Minimum_Number(One N1,Two N2)
{
	cout<<"\n";
	if(N1.Num1 < N2.Num2)
		{
			cout<<N1.Num1<<" Is Miniumu";
		}
	else
		{
			cout<<N2.Num2<<" Is Miniumu";
		}
}

void main()
{
 clrscr();

	Data1.Get_Data1();

	Data2.Get_Data2();

	Minimum_Number(Data1,Data2);
 getch();
}