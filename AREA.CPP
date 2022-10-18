#include<iostream.h>
#include<conio.h>
class Area_Calculate
{
	public:
		void Area(int X) // Square
			{
				cout<<"Square :- "<< 4 * X<<endl;
			}
		void Area( float Pi, int R)// Circle
			{
				cout<<"Circle :- "<<Pi*R*R<<endl;
			}
		void Area(int B, int H, int t) // Triangle
			{
				cout<<"Triangle :- "<<1.0/2.0*B*H;
			}
}Data;

void main()
{

 clrscr();
	Data.Area(5);
	Data.Area(3.14,34);
	Data.Area(12,34,0);
 getch();
}