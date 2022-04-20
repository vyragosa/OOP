#ifndef _TRIANGLE_
#define _TRIANGLE_
class Triangle {
private:
	int a, b, c;
public:
	Triangle(int a, int b, int c);
	Triangle operator += (Triangle& other);
	Triangle operator -= (Triangle& other);
	void Output();
};
#endif
