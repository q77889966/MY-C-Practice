#include<stdio.h>
int main()
{
	int i, j, n, c = 0;
	int a[10][10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[i][j] == 0)
				c++;
		}
	}
	if (c == n * (n - 1) / 2)
		printf("YES");
	else
		printf("NO");
	return 0;
}