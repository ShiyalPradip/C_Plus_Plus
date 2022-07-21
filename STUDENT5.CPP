/*
|--------------------------------: Code No:5 :---------------------------------
|  Write a C++ Menu Based Program As Per In Following Information              |
|		1. Create Class STUDENT Which Contais Data Members Such                 |
|			As Name,Id,Per,And College_Name.                                     |
|		2. Input Any 10 Records Using Memeber Function Get_Data().              |
|		3. Sort Records As Per College_Name Using Memeber Function Sort().      |
|		4. Display Records In Appropriate Formate Using Display()               |
|------------------------------------------------------------------------------
*/

#include<iostream.h>
#include<string.h>
#include<conio.h>

int Records;

class Student
{
	int Id;
	float Per;
	char Name[45],Co_Name[45];

	public:
		void Get_Data();
		void Sort(Student *Data);
		void Display();
};

void Student:: Get_Data()
{
	cout<<"Enter Id:- ";
	cin>>Id;

	cout<<"Enter Per:- ";
	cin>>Per;

	cout<<"Enter Name:- ";
	cin>>Name;

	cout<<"Enter College:- ";
	cin>>Co_Name;

	cout<<"\n";
}

void Student:: Sort(Student *Data)
{
	Student Temp1;

	for(int i=0; i<Records; i++)
		{
			for(int j=i+1; j<Records; j++)
				{
					if(strcmp(Data[i].Co_Name,Data[j].Co_Name)>0)
						{
							Temp1=Data[i];
							Data[i]=Data[j];
							Data[j]=Temp1;
						}
				}
		}
}

void Student:: Display()
{
	cout<<Id<<"\t"<<Name<<"\t\t"<<Per<<"\t\t"<<Co_Name<<endl;
}

void main()
{
 clrscr();
	Student Data[45],Temp2;

	cout<<"How Many Elements:- ";
	cin>>Records;

	clrscr();
	cout<<"Enter "<<Records<<" Records:- "<<endl<<endl;

	for(int i=0; i<Records; i++)
		{
			Data[i].Get_Data();
		}

	Temp2.Sort(Data);

	clrscr();
	for(i=0; i<Records; i++)
		{
			Data[i].Display();
		}

 getch();
}