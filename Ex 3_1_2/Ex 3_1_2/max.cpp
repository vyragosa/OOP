#include "max.h"
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
