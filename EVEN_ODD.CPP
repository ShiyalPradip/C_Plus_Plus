#include<iostream.h>
#include<conio.h>
void main()
{
	int Number;
 clrscr();
	cout<<"Enter a Number:- ";
	cin>>Number;

	if(Number%2==0)
		{
			cout<<Number<<" Is Even.";
		}
	else
		{
			cout<<Number<<" Is Odd.";
		}
 getch();
}