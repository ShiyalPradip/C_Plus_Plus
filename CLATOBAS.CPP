/*
|----------------------------------------------------------------------------|
				 Write a C++ Code To Convert Hours,Minutes And Seconds
								in To The Numbers Of Seconds

										(Class To Basic)
|----------------------------------------------------------------------------|
*/
#include<iostream.h>
#include<conio.h>

class Time2
{
	int H,M,S;

	public:
		void Get_Data()
			{
				cout<<"Enter Hourse :- ";
				cin>>H;

				cout<<"Enter Minutes:- ";
				cin>>M;

				cout<<"Enter Seconds:- ";
				cin>>S;
			}
		void Put_Data()
			{
				cout<<"\nHourse  :- "<<H<<endl;
				cout<<"Minutes :- "<<M<<endl;
				cout<<"Seconds :- "<<S<<endl;
			}

		operator int()
			{
				return( ( H * 3600 ) + ( M * 60 ) + ( S * 1 ) );
			}
};

void main()
{
	Time2 T1;
 clrscr();
	T1.Get_Data();
	T1.Put_Data();

	int Seconds;

	Seconds = T1;

	cout<<"\nTotal Seconds Are -> "<<Seconds;
 getch();
}