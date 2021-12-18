#include <stdio.h>

main()
{
	static int ary[] = {1, 3, 5};
	printf("%d %d", ary[-1], ary[5]);
}
