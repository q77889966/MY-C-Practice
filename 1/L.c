#include<stdio.h>
void main()
{
	//int n, i, j = 1, sum = 0;
	long int n;
	scanf("%ld", &n);
	if (n < 28&&n>5)
		printf("6 ");
	if (n >= 28 && n < 496)
		printf("6 28 ");
	if (n >= 496 && n < 8128)
		printf("6 28 496 ");
	if (n >= 8128)
		printf("6 28 496 8128 ");
	/*for (i = 1; i <= n; i++)
	{
		while (i > j)
		{
			if (i % j == 0)
				sum = sum + j;
			j++;
		}
		if (sum == i)
		{
			printf("%d ", i);
			
			
		}
		sum = 0;
		j = 1;
	}*/

}