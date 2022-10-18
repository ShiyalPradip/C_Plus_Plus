#include<iostream.h>
#include<conio.h>

class Student
{
	int Roll_No;
	char Name[45],Address[45];

	public:
		void Input_Data(void)
			{
				cout<<"Enter Student Name:- ";
				cin>>Name;

				cout<<"Enter Student Roll No:- ";
				cin>>Roll_No;

				cout<<"Enter Student Address:- ";
				cin>>Address;
			}

		void Put_Data(void)
			{
				cout<<Roll_No<<"\t"<<Name<<"\t"<<Address<<endl;
			}

}Data[15];

void main()
{
	int No_Records;
 clrscr();

	cout<<"How Many Records Do You Want To Insert:- ";
	cin>>No_Records;

	clrscr();

	for(int i=0; i<No_Records; i++)
		{
			Data[i].Input_Data();
		}

	cout<<"Roll No\tName\tAddress"<<endl;

	for(i=0; i<No_Records; i++)
		{
			Data[i].Put_Data();
		}
 getch();
}