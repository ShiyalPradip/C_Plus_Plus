#include<iostream.h>
#include<conio.h>

class Middle
{
	public:
		void Middle_Num(int A=0,int B=0,int C=0)
			{
				if(A>B && A<C || A>C && A<B)
					{
						cout<<" Is Midle Value";
					}
			}
}Data;

void main()
{
 clrscr();
	Data.Middle_Num(3,5,6);
 getch();
}