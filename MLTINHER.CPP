#include<iostream.h>
#include<conio.h>
class Theory
{
	public:
		int Marks;
};

class Prectical
{
	public:
		int Score;
};

class Result: Theory,Prectical
{
	int Total;

	void Get_Data()
		{
			cout<<"Enter Theory Mark:- ";
			cin>>Marks;

			cout<<"Enter Precetical Mark:- ";
			cin>>Score;

			Total=Marks+Score;
		}

	public:
		void Put_Data()
			{
				Get_Data();

				cout<<"Total Is:- "<<Total;
			}
}Data;

void main()
{

 clrscr();
	Data.Put_Data();
 getch();
}