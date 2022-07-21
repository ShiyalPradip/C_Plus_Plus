#include<iostream.h>
#include<conio.h>

int Ma1[20][20],Ma2[20][20],Ma3[20][20],i,j;

class Matrix
{
	public:
		void Get();
		void Answer();
}Data;

void Matrix:: Get()
{
 clrscr();
	cout<<"Enter 9 Elements For Matrix1:- \n";

	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					cin>>Ma1[i][j];
				}
		}

	cout<<"Enter 9 Elements For Matrix2:- \n";
	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					cin>>Ma2[i][j];
				}
		}


}

void Matrix:: Answer()
{
 clrscr();
	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				{
					Ma3[i][j]=Ma1[i][j]+Ma2[i][j];

					cout<<" "<<Ma3[i][j]<<" ";
				}
			cout<<"\n";
		}
}

void main()
{
 clrscr();
	Data.Get();
	Data.Answer();
 getch();
}