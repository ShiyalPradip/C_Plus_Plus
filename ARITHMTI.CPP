/*

|----------------------------------------------------------------------------|
		 Perform All Arithmetic Operation Such As Additio, Multiplication
				Subtraction, Division, Modulus Using Inline Function
|----------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

int Num1,Num2;

class Arithmatic
{
	public:
		inline void Get();
}Data;

inline void Arithmatic:: Get()
{
	cout<<"Enter Number:- ";
	cin>>Num1;

	cout<<"Enter Number:- ";
	cin>>Num2;
}

void main()
{
	while(1)
		{
			clrscr();

			Data.Get();

			char Oper;

			cout<<"\n# For Exit"<<endl;

			cout<<"\nEnter Operator:- ";
			cin>>Oper;

			switch(Oper)
				{
					case '#': exit(0);
					case '+': cout<<"\n\n Addition :- "<<Num1+Num2;   		 getch(); break;
					case '-': cout<<"\n\n Subtraction:- "<<Num1-Num2; 		 getch(); break;
					case '*': cout<<"\n\n Multiplication:- "<<Num1*Num2; 	 getch(); break;
					case '/': cout<<"\n\n Division:- "<<Num1/Num2; 			 getch(); break;
					case '%': cout<<"\n\nModulus:- "<<Num1%Num2;				 getch(); break; 

					default: cout<<"Please Chose + , -, *, /, %";
								getch();
				}
		}
}