/*

|---------------------------------------------------------------------------|
		 Create a Class Product Wich Has Data Data Members Such As P_Id,P_Name
	P_Quty And Member Function Such As Input(), And Display()
|---------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<conio.h>

class Product
{
	int P_Id,P_Quty;
	char P_Name[45];

	public:
		void Input(void)
			{
				cout<<"Enter Product Id:- ";
				cin>>P_Id;

				cout<<"Enter Product Quantity:- ";
				cin>>P_Quty;

				cout<<"Enter Product Name:- ";
				cin>>P_Name;

				cout<<"\n";
			}

		void Display(void)
			{
				cout<<P_Id<<"\t\t"<<P_Name<<"\t\t\t"<<P_Quty<<endl;
			}

}Data[45];

void main()
{
	int No_Records;
 clrscr();

	cout<<"How Many Records Do You Want To Enter:- ";
	cin>>No_Records;

	clrscr();
	cout<<"Enter "<<No_Records<<" Records"<<endl<<endl;

	for(int i=0; i<No_Records; i++)
		{
			Data[i].Input();
		}

	clrscr();
	cout<<"Pro.Id\t\tPro.Name\t\tPro.Quantity"<<endl;

	for(i=0; i<No_Records; i++)
		{
			Data[i].Display();
		}
 getch();
}