
#include <stdio.h>

int main()
{
	int i, j, max, pos, flag = 0;
	int M, N;
	scanf("%d,%d", &M, &N);
	int array[100][100];
	for (i = 0; i < M; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			scanf("%d", &array[i][j]);

		}
	}

	for (i = 0; i < M; ++i)
	{
		
		max = array[i][0];
		for (j = 1; j < N; ++j)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				pos = j;
			}
		}
		
		for (j = 0; j < M; ++j)
		{
			if (array[j][pos] < max)
			{
				break;
			}
		}

		if (j == M)
		{
			printf("(%d,%d)=%d", i, pos, array[i][pos]);
			flag = 1;
			break;
		}
	}
	if (0 == flag)
	{
		printf("NO");
	}
	return 0;
}