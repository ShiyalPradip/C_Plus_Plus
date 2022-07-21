/*

|---------------------------------------------------------------------------|
		Create a Class PRODUCT Which Contains Memebers Like Id,Name,Qty, And
 Rate Memeber Function Such As Input() And Output()

 -> Insert Any 10 Records And Display In Proper Format
|---------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class Product
{
	int Id,Quantity;
	char Name[45];
	float Rate;

	public:
		void Input(void)
			{
				fflush(stdin);
				cout<<"Enter Product Id:- ";
				cin>>Id;

				cout<<"Enter Product Quantity:- ";
				cin>>Quantity;

				cout<<"Enter Product Name:- ";
				cin>>Name;

				cout<<"Enter Product Rate:- ";
				cin>>Rate;

				cout<<"\n";
			}

		void Output(void)
			{
				cout<<Id<<"\t\t"<<Quantity<<"\t\t\t"<<Name<<"\t\t"<<Rate<<endl;
			}

}Data[45];

void main()
{
	int No_Records;
 clrscr();
	cout<<"How Many Records Do You Want To Enter:- ";
	cin>>No_Records;

	clrscr();
	cout<<"Enter "<<No_Records<<" Records:- "<<endl<<endl;

	for(int i=0; i<No_Records; i++)
		{
			Data[i].Input();
		}

	clrscr();
	cout<<"Id\t\tQuantity\t\tName\t\tRate"<<endl;
	for(i=0; i<No_Records; i++)
		{
			Data[i].Output();
		}
 getch();
}