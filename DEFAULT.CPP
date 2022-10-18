#include<iostream.h>
#include<conio.h>
class Defult
{
		public:
			void Sum(int X, int Y=0, int Z=0)
				{
					cout<<"Sum Is:- "<<X+Y+Z;
				}
}Data;

void main()
{
 clrscr();
	Data.Sum(9,5);
 getch();
}