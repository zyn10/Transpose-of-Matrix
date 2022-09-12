#include<iostream>
using namespace std;
int main()
{

	int First[5][5];
	int Transpose[5][5];
	cout << "Input the enteries of 1st 5*5 matrix" << endl;
	for (int i = 0; i < 5; i++)//rows

	{
		for (int j = 0; j < 5; j++)//coloumns
			cin >> First[i][j];//taking input of matrix
	}
	for (int i = 0; i < 5; i++)//output matrix 
	{
		for (int j = 0; j < 5; j++)
			cout << First[i][j] << "  ";
		cout << endl;
	}


	for (int i = 0; i < 5; i++)//finding transpose 
		for (int j = 0; j < 5; j++)
			Transpose[j][i] = First[i][j];
	cout << endl;
	cout << "The Transpose of  Matrix is " << endl;


	for (int i = 0; i < 5; i++)//displaying transpose
	{
		for (int j = 0; j < 5; j++)
		{
			cout << Transpose[i][j] << "  ";
		}
		cout << endl;
	}


	system("pause>0");
}
