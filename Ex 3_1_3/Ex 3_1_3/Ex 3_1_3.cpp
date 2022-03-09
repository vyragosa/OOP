#include "Stack.h"
#include <iomanip>
using namespace std;
int main()
{
	string name;
	int n, numb1, numb2;
	cin >> name >> n;
	Stack obj1(name, n);

	cin >> name >> n;
	Stack obj2(name, n);

	do
	{
		cin >> numb1;

	} while (obj1.fill(numb1) && obj2.fill(numb1));
	cout << obj1.name << " " << obj1.n << endl;
	cout << obj2.name << " " << obj2.n << endl;
	cout << left << setw(15) << obj1.name 
		<< left << obj2.name;
	numb2 = obj1.size;
	for (int i = 0; i < numb2; i++)
	{
		cout << endl;
		if (obj1.show(numb1))
		{
			cout << right << setw(15) << numb1;
		}

		if (obj2.show(numb1))
		{
			cout << right << setw(15) << numb1;
		}
	}

}
