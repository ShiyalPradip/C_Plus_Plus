#include<iostream.h>
#include<conio.h>

class Time
{
	public:
		int Hours;

		void Get_Data()
			{
				cout<<"Enter Hours:- ";
				cin>>Hours;
			}
};

class Day
{
	public:
		int day;

		Day(){

		}

		Day(Time T){

			day=T.Hours/24;
		}

		void Put_Data()
			{
				cout<<"\n\nValue Of Day:- "<<day;
			}
};

void main()
{
	Time T1;
 clrscr();
	T1.Get_Data();
	Day D1;
	D1=T1;
	D1.Put_Data();
 getch();
}

