#include "sub.h"

int dive(int x, int y)
{
	int cnt = 0;
<<<<<<< HEAD
	while (x > y)
	{
		cnt++;
		x = sub(x, y);
	}

=======
	while (x > y) {
		cnt++;
		x = sub(x, y);
	}
>>>>>>> 77ba31bd4c8a51f34e81853be0e9f27e92d6d1fb
	return cnt;
}
