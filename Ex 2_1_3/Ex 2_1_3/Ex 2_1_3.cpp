#include <iostream>
#include "Number.h"
int main()
{
	int n, arr[10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	Number obj(n);
	obj.PrintArray(arr);
	cout << endl;
	obj.InverseArray(arr);
	obj.PrintArray(arr);
	return 0;
}
