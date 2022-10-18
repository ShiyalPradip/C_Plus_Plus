#include<iostream.h>
#include<conio.h>
class Matrix
{
	public:
		int A[3][3];

		friend operator >>(istream &In,Matrix &M)
			{
				for(int i=0; i<3; i++)
					{
						for(int j=0; j<3; j++)
							{
								In>>M.A[i][j];
							}
					}
			}
	  friend operator <<(ostream &Out,Matrix &M)
			{
				for(i=0; i<3; i++)
					{
						for(j=0; j<3; j++)
							{
								Out<<M.A[i][j];
							}
					}
			}

	  Matrix operator +(Matrix B)
		 {
			 Matrix C;
			 for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
						{
							C.A[i][j]=A[i][j]+B[i][j];
						}
				}
			return C;
		 }


};

void main()
{
	Matrix A,B,C;
 clrscr();
	cout<<"Enter Matrix:- ";
	cin>>A;

	cout<<"Enter a Matrix:- ";
	cin>>B;

	C=A+B;

	cout<<"Sum Of Matrix Is \n";
	cout<<C;
 getch();
}