#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
	cout<<"Enter a Number:- ";
	int Num1;
	cin>>Num1;

	if(Num1>0)
		{
			cout<<endl<<Num1<<" Number Is Positive";
		}
	else if(Num1<0)
		{
			cout<<endl<<Num1<<" Number Is Nagative";
		}
	else //if(Num1==0)
		{
			cout<<endl<<" You Enter Zero";
		}
 getch();
}