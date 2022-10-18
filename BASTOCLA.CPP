/*
|----------------------------------------------------------------------------|
					  Write a C++ Code To Input Seconds And Convert
							 Into Hours , Minutes And Seconds

										  (Basic To Class)
|----------------------------------------------------------------------------|
*/

#include<iostream.h>
#include<conio.h>

class Time
{
	int H,M,S;

	public:
		Time(int Seconds){

			int Rem;

			H	 = Seconds / 3600;
			Rem = Seconds % 3600;
			M	 = Rem / 60;
			Rem = Rem % 60;
			S 	 = Rem;
		}

		void Put()
			{
				cout<<"\nHourse   :- "<<H<<endl;
				cout<<"Minutes  :- "<<M<<endl;
				cout<<"Seconds  :- "<<S;
			}
};

void main()
{
	int Seconds;
 clrscr();
	cout<<"How Many Seconds:- ";
	cin>>Seconds;

	Time T(Seconds);

	T.Put();
 getch();
}