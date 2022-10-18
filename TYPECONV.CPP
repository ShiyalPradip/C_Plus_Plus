#include<iostream.h>
#include<conio.h>

int Kg;

class Weight
{
	long Gram;

	public:
		void Get_Data()
			{
				cout<<"Enter Gram:- ";
				cin>>Gram;
			}
		void Put_Data()
			{
				cout<<"Kilo Gram Is:- "<<Kg;
			}

		operator int()
			{
				return(Gram/1000);
			}
}Data;

void main()
{

 clrscr();
	Data.Get_Data();

	Kg=Data;

	Data.Put_Data();
 getch();
}