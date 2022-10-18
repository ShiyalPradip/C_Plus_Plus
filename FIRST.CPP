/*
	program-1
*/
#include<string.h>
#include<stdio.h>
#include<iostream.h>
#include<conio.h>

class student
{
	int id;
	char name[20],college_name[20];
	float per;

	public:
		void get()
		{
			cout<<"\n\nEnter ID:";
			cin>>id;

			cout<<"Enter name :" ;
			cin>>name;

			cout<<"Enter name of college:";
			cin>>college_name;


			cout<<"Enter percentage:";
			cin>>per;
		}

		void put()
		{
		       cout<<id<<"\t"<<name<<"\t"<<college_name<<"\t\t"<<per<<endl;

		}
		void sort(student *s)
		{
			student t;
			for(int i=0;i<5;i++)
			{
				for(int j=i+1;j<5;j++)
				{
					if(strcmp(s[i].college_name,s[j].college_name)>0)
					{
						t=s[i];
						s[i]=s[j];
						s[j]=t;
					}

				}
			}
		}

};

void main()
{
	student s[5],temp;
	clrscr();

	for(int i=0;i<5;i++)
	{
		s[i].get();
	}

	cout<<"\nID\tNAME\tCollege Name\tPercentage\n";
	for(i=0;i<5;i++)
	{
		s[i].put();
	}

	temp.sort(s);


	cout<<"\nID\tNAME\tCollege Name\tPercentage\n";
	for(i=0;i<5;i++)
	{
		s[i].put();
	}
	getch();
}