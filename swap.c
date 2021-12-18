#include <stdio.h>

#define SWAP(a, b, c) {c t;t = b;b = a;a = t;}


main()
{
	int x = 10;
	int y = 20;

	SWAP(x, y, int);
	printf("x=%d y =%d\n", x, y);
}

