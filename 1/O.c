#include<stdio.h>
void main()
{
	int  c1, c2, c5, N, a, b, c;
	scanf("%d", &N);
	a = N / 5;
	b = N / 1;
	c = N / 0.5;
	for (c1 = 1; c1 <= a; c1++) {
		for (c2 = 1; c2 <= b; c2++) {
			for (c5 = 1; c5 <= c; c5++) {
				if ((c1 * 5 + c2 * 1 + c5 * 0.5 == N) && (c1 + c2 + c5 == 100))
				{
					printf("%4d%4d%4d\n", c1, c2, c5);
				}
			}
		}
	}
}