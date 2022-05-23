#include<stdio.h>
#include<math.h>
int box[99];
int count = 0;
int judge(int i, int j)
{
	if (i == 1) {
		return 1;
	}
	int k = 1;
	while (k < i)
	{
		if ((box[k] == j) || (abs(i - k) == abs(box[k] - j)))
			return 0;
		k++;
	}
	return 1;
}
void putbox(int i, int n)
{
	if (i > n) {
		count++;
	}
	else
	{
		int j;
		for (j = 1; j <= n; j++) {

			if (judge(i, j) == 1)
			{
				box[i] = j;
				putbox(i + 1, n);
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	putbox(1, n);
	printf("%d", count);
}