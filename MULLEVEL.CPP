#include<iostream.h>
#include<conio.h>
class Grand_Parent
{
	public:
		char Last_Name[45];
};

class Parent : public Grand_Parent
{
	public:
		char Middle_Name[45];
};

class Child : public Parent
{
	char First_Name[45];
	public:
		void Get_Data()
			{
				cout<<"Enter Surname:- ";
				cin>>Last_Name;

				cout<<"Enter Your Name:- ";
				cin>>Middle_Name;

				cout<<"Enter Father Name:- ";
				cin>>First_Name;
			}

		void Put_Data()
			{
				cout<<"Your Full Name Is:- ";
				cout<<" "<<Last_Name;
				cout<<" "<<Middle_Name;
				cout<<" "<<First_Name;
			}
}Data;

void main()
{

 clrscr();
	Data.Get_Data();
	Data.Put_Data();
 getch();
}