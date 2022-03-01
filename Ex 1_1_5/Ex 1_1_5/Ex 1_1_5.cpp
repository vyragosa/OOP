#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n >= 1 && n <= 9)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << j;
				if (j != i)
				{
					cout << " ";
				}
			}
			if (i != n)
			{
				cout << endl;
			}
		}
	}
	else
		cout << "N is wrong: "<<n;
	return(0);
}