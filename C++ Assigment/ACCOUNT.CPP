/*
|---------------------------------: Code : 6 :-------------------------------|
		  Write a C++ Menu Based Program As Per In Following Information

	 0-> 1. Create Class ACCOUNT Which Contains Data Members Such As Acc_No,
			  Name, Bal.
	 0-> 2. To Provide Following Facility:-

					(A) Deposite()
					(B) Withdraw()
					(C) Display()

				  Perform Above Operation Untill User Want To Exit.

					If Withdraw Amount Is Larger Than Main Balance
							 Then Give Appropriate Message
|----------------------------------------------------------------------------|
*/
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

class Account
{
	long Account_No;
	char Name[45];
	float Balance;

	public:
		Account()
			{
				Account_No=2034;
				strcpy(Name,"Rajesh");
				Balance=3000;
			}

		void Deposite();
		void Withdraw();
		void Display();
}Data;

float Rupe;

void Account:: Deposite()
{
 clrscr();

	cout<<"Enter Amount:- ";
	cin>>Rupe;

	Balance+=Rupe;

	cout<<"\n"<<Rupe<<" Is Deposited";
}

void Account:: Withdraw()
{
 clrscr();
	cout<<"How Much Withdraw:- ";
	cin>>Rupe;

	if( Rupe > Balance )
		{
			cout<<"\n\nNot Valid";
		}
	else
		{
			Balance-=Rupe;
			cout<<"\n\n"<<Rupe<<" Is Withdrw";
		}
}

void Account::Display()
{
 clrscr();
	cout<<"Name \t\t A/c No \t Balance"<<endl<<endl;

	cout<<Name<<"\t\t "<<Account_No<<"\t\t  "<<Balance;
}

void main()
{
	char Choice;

	while(1)
		{
			clrscr();
			cout<<"Press 0 For Exit"<<endl;
			cout<<"Press 1 For Diposit"<<endl;
			cout<<"Press 2 For Withdraw"<<endl;
			cout<<"Press 3 For Display"<<endl;

			cout<<"\nEnter Your Choice:- ";
			Choice=getch();

			switch(Choice)
				{
					case '0': exit(0);
					case '1': Data.Deposite();		getch(); break;
					case '2': Data.Withdraw();		getch(); break;
					case '3': Data.Display();		getch(); break;
					default: cout<<"\n\nInvailid Choice";
								cout<<"\nPress Any Key";
								getch();
				}
		}
}