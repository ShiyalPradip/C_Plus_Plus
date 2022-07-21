/*
		Write a C++ Programe To Calculate Area Of Square,Circle And Triangle
									Using Function Overloading
|----------------------------------------------------------------------------|

*/

#include<iostream.h>
#include<conio.h>

class Calculate_Area
{
	public:
		void Area(int X) //Square
			{
				cout<<"Area Of Square      :- "<< 4 * X;
			}
		void Area(float Pi, int R) // Circle
			{
				cout<<"\nArea Of Circle      :- "<< Pi * R * R;
			}
		void Area(int B, int H, int T) // Triangle
			{
				cout<<"\nArea Of Trangle Is  :- "<< 1.0 / 2.0 * B * H;
			}
}Data;

void main()
{
 clrscr();
	Data.Area(18);
	Data.Area(3.14,18);
	Data.Area(20,30,0);
 getch();
}