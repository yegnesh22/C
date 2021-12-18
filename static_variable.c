#include <stdio.h>

void myfn()
{
	static int x = 5;
	x++;
	printf("%d",x);
}

main()
{
	myfn();
	myfn();
}
