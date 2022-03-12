#include <iostream>
#include "max.h"
#include "FirstType.h"
#include "SecondType.h"
using namespace std;

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