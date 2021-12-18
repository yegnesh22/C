#include <stdio.h>

struct pp {
	int x;
	int y;
};

main()
{
	struct pp pp1[] = {1,2,3,4,5,6};
	struct pp *ptr = pp1;

	printf("%d %d\n", ptr->x, (ptr+2)->x);
}
