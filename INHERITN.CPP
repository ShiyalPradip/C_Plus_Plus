#include<iostream.h>
#include<conio.h>
class Class1
{
	public:
		int Roll_No;
		char Name[45];

		void Get_Data()
			{
				cout<<"Enter Roll No:- ";
				cin>>Roll_No;

				cout<<"Enter Name:- ";
				cin>>Name;
			}
};

class Class2 : public Class1
{
	public:
		void Put_Data()
			{
				cout<<"\nRoll No:- "<<Roll_No;
				cout<<"\nName   :- "<<Name;
			}
}Data;

void main()
{
 clrscr();
	Data.Get_Data();
	Data.Put_Data();
 getch();
}