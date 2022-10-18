#include<iostream.h>
#include<conio.h>
class Postfix
{
	int X,Y;
	public:
		Postfix()
			{
				X=10,Y=20;
			}

		void operator ++()
			{
				X=X++;
				Y=Y++;
			}
		void Put()
			{
				cout<<"Value Of X:- "<<X<<endl;
				cout<<"Value Of Y:- "<<Y;
			}
};

void main()
{

 clrscr();
	Postfix Data;

	++Data;

	Data.Put();

 getch();
}