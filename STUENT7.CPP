#include<iostream.h>
#include<conio.h>
class Student
{
	int Roll_No,Cpp,Os,Sad,Dfs,Total;
	char Grade,Name[45];
	float Per;
		public:

			void Get_Data()
				{
					cout<<"Enter Name :- ";
					cin>>Name;

					cout<<"Enter Roll No:- ";
					cin>>Roll_No;

					cout<<"Enter C++ Marks:- ";
					cin>>Cpp;

					cout<<"Enter Os Mark:- ";
					cin>>Os;

					cout<<"Enter Sad Mark:- ";
					cin>>Sad;

					cout<<"Enter Dfs Mark:- ";
					cin>>Dfs;

					Total= Get_Total(Cpp,Os,Sad,Dfs);
					Per = Get_Per(Total);
					Grade = Get_Grade(Per);
				}

			int Get_Total(int C, int O, int S, int D)
				{
					return(C+O+S+D);
				}

			float Get_Per(int T)
				{
					return(T/4.0);
				}

			char Get_Grade(float P)
				{
					return 0;
				}

			void Display()
				{
					cout<<"Student Name    :- "<<Name<<endl;
					cout<<"Student Roll No :- "<<Roll_No<<endl;
					cout<<"C++ Marks       :- "<<Cpp<<endl;
					cout<<"Os Marks        :- "<<Os<<endl;
					cout<<"Sad Marks       :- "<<Sad<<endl;
					cout<<"Dfs Marks       :- "<<Dfs<<endl;
					cout<<"Total Marks     :- "<<Total<<endl;
					cout<<"Persantage      :- "<<Per<<endl;

				}
}Data;

void main()
{

 clrscr();
	Data.Get_Data();
	Data.Display();
 getch();
}