#include <stdio.h>

struct s {
	char *n;
	int a;
};

main()
{
	struct s m;
	struct s *n = &m;

	n->n="Turing";
	printf("%s", n->n);
}
