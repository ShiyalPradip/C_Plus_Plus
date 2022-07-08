/*

|----------------------------------------------------------------------------|
		Create a C++ Programme To Find Out Middle Value Frome Three Different
								Classes Using Friend Function
|----------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<conio.h>

class Number2;
class Number3;

class Number1
{
	int Num1;

	public:
		void Get_Data1()
			{
				cout<<"Enter a Number:- ";
				cin>>Num1;
			}

		friend void Middle_Value(Number1,Number2,Number3);

}Data1;

class Number2
{
	int Num2;

	public:
		void Get_Data2()
			{
				cout<<"Enter a Number:- ";
				cin>>Num2;
			}

		friend void Middle_Value(Number1,Number2,Number3);

}Data2;

class Number3
{
	int Num3;

	public:
		void Get_Data3()
			{
				cout<<"Enter a Number:- ";
				cin>>Num3;
			}

		friend void Middle_Value(Number1,Number2,Number3);

}Data3;

void Middle_Value( Number1 N1 , Number2 N2 , Number3 N3 )
{
	cout<<"\n";

	if( N1.Num1 > N2.Num2 && N1.Num1 < N3.Num3 || N1.Num1 > N3.Num3 && N1.Num1 < N2.Num2)
		{
			cout<<N1.Num1<<" Is a Middle Value";
		}
	else if(N2.Num2 > N3.Num3 && N2.Num2 < N1.Num1 || N2.Num2 > N1.Num1 && N2.Num2 < N3.Num3)
		{
			cout<<N2.Num2<<" Is a Middle Value";
		}
	else if(N3.Num3 > N1.Num1 && N3.Num3 < N2.Num2 || N3.Num3 > N2.Num2 && N3.Num3 < N1.Num1)
		{
			cout<<N3.Num3<<" Is a Middle Value";
		}
	else
		{
			cout<<"Don't Enter Same Numbers";
		}
}

void main()
{
 clrscr();

	Data1.Get_Data1();

	Data2.Get_Data2();

	Data3.Get_Data3();

	Middle_Value(Data1,Data2,Data3);

 getch();
}