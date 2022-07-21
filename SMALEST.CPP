/*

|---------------------------------: Code: 3 :--------------------------------|
		 Write C++ Program That Accept Three Values From User And Display
					Smallest Value Among Them Using Inline Function
|----------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<conio.h>

int Num1,Num2,Num3;

class Small
{
	public:
		inline void Get_Data();
		inline void Process_And_Display();
}Data;

inline void Small:: Get_Data()
{
	cout<<"Enter a Number:- ";
	cin>>Num1;

	cout<<"Enter a Number:- ";
	cin>>Num2;

	cout<<"Enter a Number:- ";
	cin>>Num3;
}

inline void Small:: Process_And_Display()
{
	cout<<"\n";

	if( Num1 < Num2 && Num1 < Num3)
		{
			cout<<Num1<<" Is Smallst";
		}
	else if(Num2 < Num3 && Num2 < Num1)
		{
			cout<<Num2<<" Is Smallst";
		}
	else if(Num3 < Num1 && Num3 < Num2)
		{
			cout<<Num3<<" Is Smallst";
		}
	else
		{
			cout<<"Don't Enter Same Numbers";
		}
}

void main()
{
 clrscr();

	Data.Get_Data();

	Data.Process_And_Display();

 getch();
}