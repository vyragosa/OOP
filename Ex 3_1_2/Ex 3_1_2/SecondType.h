#ifndef _SECONDTYPE_	
#define _SECONDTYPE_	
class FirstType;
class SecondType
{
private:
	int y, z;
public:
	void init(int _y, int _z);
	friend int max(FirstType F, SecondType S);
};
#endif
