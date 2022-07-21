/*
|--------------------------------: Code: 21 :--------------------------------|
		Write a C++ Program For The Book Store To Help Book Seller About The
						  Books That He Sells,It Must Include:

						 Book Code, Title,Author,Editio,Publisher
			 1) Enter Information About Ten Books And Display One By One
				 On Screen.
			 2) Also Display User's Choice Book From Entered Books Details Based
				 On Book Title,Display Appropriate Message If Available Or Not.
			 3) Use Approoriate member Functions.
|----------------------------------------------------------------------------|
*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class Book
{
	long Code;
	char Title[45],Author[45],Publisher[45];
	int  Edition;

	public:
		void Get_Data()
			{
			  clrscr();
				cout<<"Enter Book Code   :- ";
				cin>>Code;

				cout<<"Enter Book Title  :- ";
				cin>>Title;

				cout<<"Enter Author Name :- ";
				cin>>Author;

				cout<<"Enter Publisher   :- ";
				cin>>Publisher;

				cout<<"Enter Edition     :- ";
				cin>>Edition;
			}


		void Search();

		void Display()
			{
			  clrscr();
				cout<<"Book Id        :- "<<Code<<endl;
				cout<<"Book Title     :- "<<Title<<endl;
				cout<<"Book Author    :- "<<Author<<endl;
				cout<<"Book Publisher :- "<<Publisher<<endl;
				cout<<"Book Edition   :- "<<Edition;

				gotoxy(20,15); cout<<"Press Any Key For See Next Record -----> ";
			}

}Data[45];

int No_Records;

void Book:: Search()
{

}

void main()
{
	char Choice;

	while(1)
		{
			clrscr();

			cout<<"Press 0 For Exit"<<endl;
			cout<<"Press 1 For Create"<<endl;
			cout<<"Press 2 For Display"<<endl;
			cout<<"Press 3 For Search"<<endl;

			cout<<"\n Enter Your Choice:- ";
			Choice=getch();

			switch(Choice)
				{
					case '0': exit(0);
					case '1': clrscr();

								 cout<<"How Many Records Do You Want To Enter:- ";
								 cin>>No_Records;

								 clrscr();
								 cout<<"Enter "<<No_Records<< "Records:- "<<endl<<endl;

								 for(int i=0; i<No_Records; i++)
									{
										Data[i].Get_Data();
									}

								 getch();
					break;

					case '2': clrscr();

								 for(i=0; i<No_Records; i++)
									{
										Data[i].Display();

										getch();
									}

					break;
					//case '3': Data.Search();		getch(); break;
					default: cout<<"\n\ Invailid Choice"<<endl;
								cout<<"Press Any Key.....";
								getch();
				}
		}
}