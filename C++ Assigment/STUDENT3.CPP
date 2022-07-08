/*

|---------------------------------------------------------------------------|
			 Create Class Student Which Contains Memebers Like Roll_No,name And
	 Address Use Get_Data() Function For Input Data And Put_Data() Functio
	 For Display Records.
|---------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<conio.h>

class Student
{
	int Roll_No;
	char Name[45],Address[45];

	public:
		void Get_Data(void)
			{
				cout<<"Enter Student Name:- ";
				cin>>Name;

				cout<<"Enter Student Roll No:- ";
				cin>>Roll_No;

				cout<<"Enter Student Address:- ";
				cin>>Address;

				cout<<"\n";
			}

		void Put_Data(void)
			{
				cout<<Roll_No<<"\t\t"<<Name<<"\t\t"<<Address<<endl;
			}

}Data[45];

void main()
{
	int No_Records;
 clrscr();

	cout<<"How Many Records Do You Want To Insert:- ";
	cin>>No_Records;

	clrscr();
	cout<<"Enter "<<No_Records<<" Records:- "<<endl<<endl;

	for(int i=0; i<No_Records; i++)
		{
			Data[i].Get_Data();
		}

	clrscr();
	cout<<"Roll No\t\tName\t\tAddress"<<endl;

	for(i=0; i<No_Records; i++)
		{
			Data[i].Put_Data();
		}
 getch();
}