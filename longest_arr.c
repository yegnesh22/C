/*
 * find the first longest array where in 2 input numbers occur exactly once in an array
 */

#include <stdio.h>

int solution(int X, int Y, int A[], int N) {
	int result = -1;
	int nX = 0;
	int nY = 0;
	int i;

	for (i = 0; i < N; i++) {
		if (A[i] == X) 
			nX += 1;
		else if (A[i] == Y)
			nY += 1;
		if (nX == nY)
			result = i;
	}

	if (nX == 0)
		return -1;

	return result;
}

int main()
{
	int A[] = {100, 1, 6, 2, 13, 26 };

	printf ("%d\n",solution(1, 13, A, (sizeof(A)/sizeof(A[0]))));
}

