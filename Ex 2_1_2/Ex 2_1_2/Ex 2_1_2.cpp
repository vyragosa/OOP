#include <iostream>
#include "Triangle.h"
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	Triangle obj(a, b, c);
	cout << "P = " << obj.P() << endl;
	cout << "S = " << obj.S();
	return 0;
}
