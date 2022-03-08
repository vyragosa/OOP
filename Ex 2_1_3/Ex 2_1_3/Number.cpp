#include "Number.h"

Number::Number(int _n)
{
	n = _n;
	cout << "N = " << n << endl;
}

void Number::PrintArray(int* arr)
{
	for (int i = 0; i < n; i++)
	{
		cout << right << setw(5) << arr[i];
	}
}

void Number::InverseArray(int* arr)
{
	int temp;
	for (int i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = temp;
	}
}
