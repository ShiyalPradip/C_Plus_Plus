/*
|----------------------------------: Code: 7 :-------------------------------|
					Write a C++ Program To Create a Class "Employee".
	Data Memeber Like Emp_No ,Emp_Name ,Bsalary ,Ta ,Da ,Hra ,Pf ,Net_Salary
							  And Take The Information Of
		  Employee(Take Only Emp_No, Emp_Name, Bsalary From User) With
  Get_Data() Memeber Function, Use Calculate() Memeber Function To Calculate
	Ta(10 %), Da(40 %), Hra(25 %), And Pf(15 %) From Bsalary And Final Salary
	  Store Into Net_Salary Data Memeber. Also Display Data With Put_Data()
										  Member Function
|----------------------------------------------------------------------------|
*/

#include<iostream.h>
#include<conio.h>

class Employee
{
	int   Emp_No;
	char  Emp_Name[45];
	float Bsalary,Ta,Da,Hra,Pf,Net_Salary;

	public:
		void Get_Data()
			{
				cout<<"Enter Employee Id:- ";
				cin>>Emp_No;

				cout<<"Enter Employee Name:- ";
				cin>>Emp_Name;

				cout<<"Enter Employee Base Salary:- ";
				cin>>Bsalary;
			}

		void Calculate()
			{
				float Gsalary;

				Ta  = (Bsalary * 10) / 100;
				Da  = (Bsalary * 40) / 100;
				Hra = (Bsalary * 25) / 100;
				Pf  = (Bsalary * 15) / 100;

				Gsalary = Bsalary + Ta + Hra + Da;
				Net_Salary = Gsalary - Pf;
			}

		void Put_Data()
			{
			 clrscr();

				cout<<"Employee Id          :- "<<Emp_No<<endl;
				cout<<"Employee Name        :- "<<Emp_Name<<endl;
				cout<<"Employee Ta          :- "<<Ta<<endl;
				cout<<"Employee Da          :- "<<Da<<endl;
				cout<<"Employee Hra         :- "<<Hra<<endl;
				cout<<"Employee Pf          :- "<<Pf<<endl;
				cout<<"Employee Base Salary :- "<<Bsalary<<endl;
				cout<<"Employee Net Salary  :- "<<Net_Salary;
			}
}Data;

void main()
{
 clrscr();

	Data.Get_Data();

	Data.Calculate();

	Data.Put_Data();

 getch();
}
