/*

|---------------------------------------------------------------------------|
		Create Class STUDENT Which Contains Roll_No,Name,City,Per And Member
 Functions Such As Input() And Display()

	-> Insert Any 10 Records
	-> Sort Them In Descending Order By Per
|---------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<conio.h>

int No_Records;

class Student
{
	int   Roll_No;
	char  City[45];
	float Per;

	public:
		void Input()
			{
				cout<<"Enter Roll No:- ";
				cin>>Roll_No;

				cout<<"Enter City:- ";
				cin>>City;

				cout<<"Enter Persantage:- ";
				cin>>Per;

				cout<<"\n";
			}

		void Display()
			{
				cout<<Roll_No<<"\t\t"<<City<<"\t\t"<<Per<<endl;
			}

		void Sort(Student *Data);

}Data[45],Temp1,Temp2;

void Student:: Sort(Student *Data)
{
	for(int i=0; i<No_Records; i++)
		{
			for(int j=i+1; j<No_Records; j++)
				{
					if(Data[i].Per < Data[j].Per)
						{
							Temp1 = Data[i];
							Data[i] = Data[j];
							Data[j] = Temp1;
						}
				}
		}
}

void main()
{
 clrscr();
	cout<<"How Many Records Do You Want To Insert:- ";
	cin>>No_Records;

	clrscr();
	cout<<"Enter "<<No_Records<<" Records:- "<<endl<<endl;

	for(int i=0; i<No_Records; i++)
		{
			Data[i].Input();
		}

	Temp2.Sort(Data);

	clrscr();
	for(i=0; i<No_Records; i++)
		{
			Data[i].Display();
		}
 getch();
}