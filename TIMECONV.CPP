#include<iostream.h>
#include<conio.h>
class Time
{
	int H,M,S;

	public:
		void Get_Data()
			{
				cout<<"Enter Hours   :- ";
				cin>>H;

				cout<<"Enter Minutes :- ";
				cin>>M;

				cout<<"Enter Seconds :- ";
				cin>>S;
			}
		void Put_Data()
			{
				cout<<"\n\nHours   :- "<<H<<endl;
				cout<<"Minutes :- "<<M<<endl;
				cout<<"Seconds :- "<<S<<endl;
			}

		operator int()
			{
				return( ( H * 3600 ) + ( M * 60 ) + ( S * 1) );
			}
}Data;

void main()
{

 clrscr();
	Data.Get_Data();
	Data.Put_Data();

	long Second = Data;

	cout<<"\n\nTotal Seconds Are:- "<<Second;
 getch();
}