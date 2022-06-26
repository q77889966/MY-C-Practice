#include<stdio.h>
int data[1000] = { 0 }, status[1000] = { 0 };
int count() {
	int i, j = 0;
	for (i = 0; i < 20; i++)
		if (data[i] != 0)
			j++;
	return j;
}
void main()
{
	int j;
	int N, num_i;
	int i = 0;
	FILE* fp;
	fp = fopen("input.txt", "r");
	for (i = 0; i < 20; i++) {
		fscanf(fp, "%d", &data[i]);
	}
	fclose(fp);
	i = 0;
	N = count();
	int T = 1;
	int count = 0;
	int round = -1;
	while (count < N)
	{
		i = 0;
		while (1)
		{
			round = (round + 1) % N;
			if (status[round] == 0)
				i++;
			if (i == T)
			{
				count++;
				status[round] = count;
				T = data[round];
				break;
			}
		}
	}
	for (i = 1; i <= N; i++)
		for (j = 0; j < N; j++)
			if (status[j] == i)
				printf("%4d", j + 1);
}
