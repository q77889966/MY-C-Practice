#include <stdio.h>
#define N 3
#define M 4

void fun(int* a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
}
void main()
{
	int a[N][M];
	int i, j;

	for (i = 0; i < N; i++)
	{
		fun(a[i], M);

		for (j = 0; j < M; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}