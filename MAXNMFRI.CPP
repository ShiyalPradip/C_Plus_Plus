/*

|-------------------------------: Code No : 12 :-----------------------------|

					Find Out Maximum Number From Two Different Classes
									  Using Friend Function

|----------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<conio.h>

class Second_Number;

class First_Number
{
	int Num1;

	public:
		void Get_Data1()
			{
				cout<<"Enter a Number:- ";
				cin>>Num1;
			}

		friend void Max_Number(First_Number,Second_Number);

}Data1;

class Second_Number
{
	int Num2;

	public:
		void Get_Data2()
			{
				cout<<"\nEnter a Number:- ";
				cin>>Num2;
			}

		friend void Max_Number(First_Number,Second_Number);

}Data2;

void Max_Number(First_Number N1,Second_Number N2)
{
	cout<<"\n\n";

	if(N1.Num1 > N2.Num2)
		{
			cout<<N1.Num1<<" Is Max";
		}
	else
		{
			cout<<N2.Num2<<" Is Max";
		}
}

void main()
{
 clrscr();

	Data1.Get_Data1();

	Data2.Get_Data2();

	Max_Number(Data1,Data2);

 getch();
}