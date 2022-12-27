#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Student
{
	char Student_Name[45],College_Name[45];
	int Student_Id;
	float Per;

	public:
		void Get_Data(void)
			{
			  clrscr();
				cout<<"Enter Student Name:- ";
				cin>>Student_Name;

				cout<<"Enter College Name:- ";
				cin>>College_Name;

				cout<<"Enter Student Id:- ";
				cin>>Student_Id;

				fflush(stdin);
				cout<<"Enter Student Persantage:- ";
				cin>>Per;
			}

		void Short_Data(void)
			{

			}

		void Disply_Records(void)
			{
				cout<<Student_Id<<"\t"<<Student_Name<<"\t"<<College_Name<<"\t"<<Per;
			}

}Data[45];

void main()
{
	int No_Record;

	cout<<"How Many Student Data Do You Want To Enter:- ";
	cin>>No_Record;

	for(int i=0; i<No_Record; i++)
		{
			Data[i].Get_Data();
		}

	clrscr();
	cout<<"Id \t Name \t College \t Per"<<endl;
	for(i=0; i<No_Record; i++)
		{
			Data[i].Disply_Records();
		}

	getch();
 //	Data.Short_Data();
}