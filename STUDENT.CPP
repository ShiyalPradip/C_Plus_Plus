#include<iostream.h>
#include<conio.h>
class Student
{
	int Roll_No;
	char Student_Name[45],Course[45];

	public:
		void Get_Student_Data(void)
			{
				cout<<"Enter Student Name:- ";
				cin>>Student_Name;

				cout<<"Enter Student Roll No:- ";
				cin>>Roll_No;

				cout<<"Enter Student Course:- ";
				cin>>Course;
			}

		void Put_Student_Data(void)
			{
				clrscr();
				cout<<"Student Name:- "<<Student_Name<<endl;
				cout<<"Student Roll No:- "<<Roll_No<<endl;
				cout<<"Student Course:- "<<Course<<endl;
			}
}Data;

void main()
{

 clrscr();
	Data.Get_Student_Data();
	Data.Put_Student_Data();
 getch();
}