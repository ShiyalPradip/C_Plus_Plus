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

		void Create_Accounts();
		void Get_Data();
		void Deposit();
		void Withdro();
		void Display();
}Data;

void Account::Create_Accounts()
{
	int No_Data;
 clrscr();
	cout<<"How Many Accounts Do You Want To Create:- ";
	cin>>No_Data;

	for(int i=0; i<No_Data; i++)
		{
			Data.Get_Data();
		}
}

void Account::Get_Data()
{
	cout<<"Enter Name:- ";
	cin>>Data.Name;

	cout<<"Enter Account No:- ";
	cinn>>Account_No;

	cout<<"Enter Balcance:- ";
	cin>>;
}

void Account::Deposit()
{
	float Rupe;

	clrscr();

	cout<<"Enter Amount:- ";
	cin>>Rupe;

	Balance=Balance+Rupe;
}

void Account::Withdro()
{
	float Rupe;

	clrscr();

	cout<<"How Much Withdro:- ";
	cin>>Rupe;

	if(Rupe>Balance)
		{
			cout<<"\n\nNot Valid";
		}
	else
		{
			Balance=Balance-Rupe;
		}
}

void Account::Display()
{
 clrscr();
	cout<<"Name \t\t A/c No \t\t Balance \t\t "<<endl<<endl;

	cout<<Name<<"\t\t  "<<Account_No<<"\t\t          "<<Balance;
}

void main()
{
	char Choice;

	while(1)
		{
			clrscr();
			cout<<"Press 0 For Exit"<<endl;
			cout<<"Press 1 For Diposit"<<endl;
			cout<<"Press 2 For Widro"<<endl;
			cout<<"Press 3 For Display"<<endl;

			cout<<"\nEnter Your Choice:- ";
			cin>>Choice;

			switch(Choice)
				{
					case '0': exit(0);
					case '1': Data.Deposit();		getch(); break;
					case '2': Data.Withdro();		getch(); break;
					case '3': Data.Display();		getch(); break;
					default: cout<<"\n\nInvailid Choice";
								cout<<"\nPress Any Key";
								getch();
				}
		}
}