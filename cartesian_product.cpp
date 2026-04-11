#include <iostream>

using namespace std;


void generatecp(int A[100], int sizea, int B[100], int sizeb)
{
	cout << endl << endl;

	cout << "cartesian product : ";

	for (int i = 0; i < sizea; i++)
	{
		for (int j = 0; j < sizeb; j++)
		{
			cout << "(" << A[i] << "," << B[j] << ")";
		}
	}

	cout << endl << endl;

	cout << " ------------------------------------" << endl << endl;

	cout << "Domain : " ;
	
	for (int i = 0; i < sizea; i++)
	{
		cout << A[i] << "  ";
	}

	cout << endl<< endl;

	cout <<"Range : ";

	for (int i = 0; i < sizeb; i++)
	{
		cout << B[i] << "  ";
	}
	cout <<endl << endl<< " ------------------------------------" << endl << endl;

}

int main()
{
	int s1, s2;

	cout << "Enter the size of set 1 : ";
	cin >> s1;
	cout << "Enter the size of set 2 : ";
	cin >> s2;


	int r1[100], r2[100];

	for (int i = 0; i < s1; i++)
	{
		cout << "Enter the "<<i + 1 << "element in set 1 : ";
		cin >> r1[i];
	}


	for (int i = 0; i < s2; i++)
	{
		cout << "Enter the " << i + 1 << "element in set 2 : ";
		cin >> r2[i];
	}


	generatecp(r1, s1, r2, s2);


	return 0;
}
