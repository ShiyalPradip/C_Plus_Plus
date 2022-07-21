#include<iostream.h>
#include<conio.h>

int Mat[5][5],i,j;

class Matrix
{
	public:
		void Get();
		void Calcu();
		void Print();
}Data;

void Matrix:: Get()
{
 clrscr();
	cout<<"Enter 9 Elements:- \n";

	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					scanf("%d",&Ma[i][j]);
				}
		}
}

void Matrix:: Calcu()
{

}

void Matrix:: Print()
{

}

void main()
{

 clrscr();

 getch();
}