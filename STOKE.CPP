#include<iostream.h>
#include<conio.h>

class Item
{
	int I_Id,I_Stoke;
	char I_Name[45];

	public:
		Item()
			{
				//I_Id = 5;

			}

		void Purchas();
		void Sales();
		void Stoke();

}Data;

void Item:: Purchas()
{

}

void Item:: Sales()
{

}

void Item: Stoke()
{

}

void main()
{
	char Choice;

	while(1)
		{
			clrscr();
			cout<<"Press 0 Exit\n";
			cout<<"Press 1 Purchas\n";
			cout<<"Press 2 Sales\n";
			cout<<"Press 3 See Stoke\n";

			cout<<"Enter Your Choice:- ";
			cin>>Choice;

			switch(Choice)
				{
					case '0': exit(0);
					case '1': Data.Purchas();	getch(); break;
					case '2': Data.Sales();		getch(); break;
					case '3': Data.Stoke();		getch(); break;
					default: cout<<"\n\nInvailid Choice";
								cout<<"\nPress Any Key";
								getch();
				}
		}
}
