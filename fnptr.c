#include <stdio.h>

#define ARRAY_SIZE(x) ((sizeof(x)/sizeof(x[0])))

void fn1(void)
{
	printf("%s\n", __func__);
}

void fn2(void)
{
	printf("%s\n", __func__);
}

void fn3(void)
{
	printf("%s\n", __func__);
}


void (*fptr[]) (void) = {
	fn1,
	fn2,
	fn3,
};

main()
{
	int i;

	for (i = 0; i < ARRAY_SIZE(fptr); i++)
		(fptr[i])();
}
