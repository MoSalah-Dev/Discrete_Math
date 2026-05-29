#include <iostream>

using namespace std;

int main()
{
	int n , m;
	cout << "Enter size of the set : ";
	cin >> n;

	cout << "Enter number of the relation : ";
	cin >> m; 

	int s[100];

	cout << "Enter the element of set : \n";
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	int a[100], b[100];

	cout << "Enter the element of relation : \n";
	for (int i = 0; i < m; i++)
	{
		cin >> a[i] >> b[i];
	}
	
	bool irreflixive = true;
	for (int i = 0; i < m; i++)
	{
		if (a[i] == b[i])
		{
			irreflixive = false;
			break;
		}
	}


	if (irreflixive)
		cout << "The relation is irreflexive \n";
	else
		cout << "The relation not irreflexive \n";


}
