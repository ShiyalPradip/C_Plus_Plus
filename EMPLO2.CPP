#include<iostream.h>
#include<conio.h>

class Employee
{
	int   Em_Id;
	char  Em_Name[45];
	float Ta,Da,Pf,Hra,Net_Salary,B_Salary;  // hra = 12 % Da = 10 %

	public:
		void Get_Data();
		void Calculate();
		void Display();

}Data;

void Employee::Get_Data()
{
	cout<<"Enter Employee No:- ";
	cin>>Em_No;

	cout<<"Enter Employee Name:- ";
	cin>>Em_Name;

	cout<<"Enter Employee Salary:- ";
	cin>>B_Salary;
}

void Employee::Calculate()
{
	float G_Salary;

	Ta  = (B_Salary * 10) / 100;
	Da  = (B_Salary * 40) / 100;
	Hra = (B_Salary * 25) / 100;
	Pf  = (B_Salary * 15) / 100;

	G_Salary = B_Salary + Ta + Da + Hra;

	Net_Salary = G_Salary - Pf;
}

void Employee::Display()
{
	cout<<"Employee Name		:- \n";
	cout<<"Employee Id      :- \n";
	cout<<"Employee Ta      :- \n";
	cout<<"Employee Hra     :- \n";
	cout<<"Employee Da      :- \n";
	cout<<"Employee Net Salary:- \n";
	cout<<"Employee Basic Salary:- \n";
}

void main()
{
 clrscr();
	Data.Get_Data();
	Data.Calculate();
	Data.Put_Data();
 getch();
}

