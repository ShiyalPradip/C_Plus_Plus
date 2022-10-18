#include<iostream.h>
#include<conio.h>
class Simple_Intreast
{
  long P,N;
  float R;
	  public:
			void Calc(int P=0, int N=0, float R=0)
				{
					cout<<"Simple Intreast Is:- "<<(P*R*N)/100;
				}
}Data;

void main()
{
 clrscr();
	Data.Calc(5000,5,2);
 getch();
}