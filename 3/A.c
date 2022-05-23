#include <stdio.h>
#include <stdlib.h>
int result[50] = { 0 }, aws, count = 0, flag = 1;
int a = 0, b;
void main() {
	void doubleCheck(int c, int d[]);
	int d[50] = { 0 }, i, n, key, k, tmp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	scanf("%d", &key);
	for (i = 0; i < n - 1; i++)
		for (k = n - 2; k >= i; k--)
			if (d[k] > d[k + 1]) {
				tmp = d[k];
				d[k] = d[k + 1];
				d[k + 1] = tmp;
			}
	b = n - 1;
	while (1) {
		doubleCheck(key, d);
		if (flag == 0 || aws == -1)
			break;
	}

	printf("%d", aws);
}

void doubleCheck(int c, int d[]) {
	if (a <= b) {
		int x = (a + b) / 2;

		if (d[x] == c)
		{
			flag = 0;
			aws = x;
		}
		if (d[x] > c)
		{
			b = x - 1;
		}
		if (d[x] < c)
		{
			a = x + 1;
		}
	}
	else
		aws = -1;


}