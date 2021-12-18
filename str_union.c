#include <stdio.h>

union u1 {
	char a;
	char b;
	int c;
} u ;

struct s1 {
	char a;
	char b;
	int c;
} s;

main()
{
	printf("%d\n %d\n", sizeof(u), sizeof(s));
}
