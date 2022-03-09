#include "Stack.h"
#include <iomanip>
using namespace std;
int main()
{
	string name;
	int n, numb1, numb2;
	cin >> name >> n;
	Stack obj1(name, n);
	cout << obj1.name << " " << obj1.n << endl;
	cin >> name >> n;
	Stack obj2(name, n);
	cout << obj2.name << " " << obj2.n << endl;
	do
	{
		cin >> numb1;
	} while (obj1.fill(numb1) && obj2.fill(numb1));
	cout << setw(15) << obj1.name << obj2.name;
	while (obj1.show(numb1) && obj2.show(numb2))
	{
		cout << left << right << setw(15) << numb1 << right << setw(15) << numb2;
	}
}
