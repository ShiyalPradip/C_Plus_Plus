/*
	  Write a C++ Program For Perform Multiplication Of 2 Numbers,3 Numbers
					  And 4 Numbers Using Function Overloading
|----------------------------------------------------------------------------|
*/

#include<iostream.h>
#include<conio.h>

class Multiplication
{
	public:
		void Number(int Num1, int Num2)
			{
				cout<<"Mul Of Two Numbers   :- "<< Num1 * Num2;
			}
		void Number(int Num3, int Num4, int Num5)
			{
				cout<<"\nMul Of Three Numbers :- "<< (Num3 * Num4) * Num5;
			}
		void Number(int Num6, int Num7, int Num8, int Num9)
			{
				cout<<"\nMul Of Four Numbers  :- "<< (Num6 * Num7) * (Num8 * Num9);
			}
}Data;

void main()
{
 clrscr();
	Data.Number(9,9);
	Data.Number(9,9,9);
	Data.Number(9,9,9,9);
 getch();
}