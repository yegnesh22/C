#include <stdio.h>

main()
{
	register i=20;
	register *j = &i;

	printf("%d",*j);
}
