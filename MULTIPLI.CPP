#include<iostream.h>
#include<conio.h>
class Multiplication
{
	public:
		void Function(int A, int B)
			{
				cout<<"Mul:- "<<A*B<<endl;
			}

		void Function(int C, int D, int E)
			{
				cout<<"Mul:- "<<C*D*E<<endl;
			}

		void Function(int F, int G, int H, int I)
			{
				cout<<"Mul:- "<<F*G*H*I<<endl;
			}
}Data;

void main()
{

 clrscr();
	Data.Function(2,2);
	Data.Function(2,2,2);
	Data.Function(2,2,2,2);
 getch();
}