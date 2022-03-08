#ifndef _FIRSTTYPE_	
#define _FIRSTTYPE_	
class SecondType;
class FirstType
{
private:
	int x;
public:
	FirstType(int _x);
	friend int max(FirstType F, SecondType S);
};
#endif
