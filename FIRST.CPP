#include<conio.h>
#include<iostream.h>

class Demo
{
	int x,y;

	public:

		void Get(void)
			{
				cout<<"Enter Number :- ";
				cin>>x;

				cout<<"Enter Number:- ";
				cin>>y;
			}

		void Put(void)
			{
				cout<<endl<<"Fist Number is "<<x<<endl<<"Secound Number Is "<<y;
			}
};

void main()
{
	class Demo N;
 clrscr();
	N.Get();
	N.Put();
 getch();
}