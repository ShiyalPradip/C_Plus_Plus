#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student
{
	int Roll_No;
	char *Name;
	public:
		Student(int N,char *R){

			Roll_No=N;
			strcpy(Name,R);

			cout<<"Data.Roll No :- "<<Roll_No;
			cout<<"\nData.Name    :- "<<Name;
		}

	  Student(Student &S){

			cout<<"\n\nS.Roll_No    :- "<<S.Roll_No;
			cout<<"\nS.Name       :- "<<S.Name;
	  }
};

void main()
{
  clrscr();
	Student Data(19,"Pradip");
	Student Data2(Data);
 getch();
}