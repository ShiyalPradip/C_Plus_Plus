/*

|--------------------------------------------------------------------------|
		Create a Class STUDENT 	Which Contains Data Members Such As				|
	Roll_No,Name And Course And Member Function Like Get_Data, And put_Data |
|--------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

int No_Records;

class Student
{
	int Roll_No;
	char Name[45],Cource[45];

	public:
		void Get_Data(void)
			{
				cout<<"Enter Student Roll No:- ";
				cin>>Roll_No;

				fflush(stdin);
				cout<<"Enter Student Name:- ";
				cin>>Name;

				cout<<"Enter Student Cource:- ";
				cin>>Cource;

				cout<<"\n";
			}

		void Put_Data(void)
			{
				cout<<Roll_No<<"\t\t\t"<<Name<<"\t\t\t"<<Cource<<endl;
			}

}Data[45];

void main()
{
 clrscr();
	cout<<"How Many Records Do You Want To Enter:- ";
	cin>>No_Records;

	clrscr();
	cout<<"Enter "<<No_Records<<" Records:- "<<endl<<endl;

	for(int i=0; i<No_Records; i++)
		{
			Data[i].Get_Data();
		}

	clrscr();
	cout<<"Roll No\t\t\tName\t\t\tCource"<<endl;

	for(i=0; i<No_Records; i++)
		{
			Data[i].Put_Data();
		}
 getch();
}