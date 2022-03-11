#include <iostream>
#include "FirstType.h"
#include "SecondType.h"
using namespace std;
int max(FirstType F, SecondType S);
int main() {
	int n, m;
	cin >> n;
	FirstType obj1(n);
	cin >> n >> m;
	SecondType obj2;
	obj2.init(n, m);
	cout << "max = " << max(obj1, obj2);
	return 0;
}
int max(FirstType F, SecondType S) {
	if (F.x >= S.y) 
		if (F.x >= S.z)
			return F.x;
		else
			return S.z;
	else 
		if (S.y >= S.z)
			return S.y;
		else
			return S.z;
}
