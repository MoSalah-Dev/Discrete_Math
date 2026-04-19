#include <iostream>

using namespace std;

int main()
{
	int n , m;
	cout << "Enter the size of set : ";
	cin >> m;
	cout << "Enter the size of pairs : ";
	cin >> n;

	if (m <= 0 || n <= 0)
	{
		cout << "ERROR : You entered a wrong number ";
		return 0;
	}

	int s[100];
	for (int i = 0; i < m; i++)
	{
		cout << "Enter the " << i + 1 << "element in the set : ";
		cin >> s[i];
	}


	int x[100], y[100];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i + 1 << " is in pairs : ";
		cin >> x[i] >> y[i];
	}

	bool reflexive = true;

	for (int i = 0; i < m; i++)
	{
		bool found = false;
		for (int j = 0; j < n; j++)
		{
			if (x[j] == s[i] && y[j] == s[i])
			{
				found = true;
				break;
			}

		}
		if (!found)
		{
			reflexive = false;
		}

	}

	if (reflexive)
		cout << "The Relation is reflexive \n";
	else
		cout << "The Relation not reflexive \n";


}
