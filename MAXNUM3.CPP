#include<iostream.h>
#include<conio.h>
void main()
{
	int Num1,Num2,Num3;
 clrscr();
	cout<<"Enter a Number:- ";
	cin>>Num1;
	cout<<"Enter a Number:- ";
	cin>>Num2;
	cout<<"Enter a Number:- ";
	cin>>Num3;

	if(Num1>Num2 && Num1>Num3)
		{
			cout<<Num1<<" Is Max.";
		}
	else if(Num2>Num1 && Num2>Num3)
		{
			cout<<Num2<<" Is Max.";
		}
	else if(Num3>Num1 && Num3>Num2)
		{
			cout<<Num3<<" Is Max.";
		}
	else
		{
			cout<<"This All Numbers Are Same.";
		}
 getch();
}