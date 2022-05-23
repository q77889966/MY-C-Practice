#include <stdio.h>
#include <stdlib.h>
int result[50] = { 0 }, aws, count = 0;
void main() {
	void doubleCheck(int a, int b, int c, int d[]);
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
	doubleCheck(0, n - 1, key, d);

	for (i = count - 1; i >= 0; i--) {
		printf("%d ", result[i]);
	}

	printf("%d", aws);
}

void doubleCheck(int a, int b, int c, int d[]) {
	if (a <= b) {
		int x = (a + b) / 2;
		result[count] = d[x];
		count++;

		if (d[x] == c)
		{
			aws = x;
		}
		if (d[x] > c)
		{
			doubleCheck(a, x - 1, c, d);
		}
		if (d[x] < c)
		{
			doubleCheck(x + 1, b, c, d);
		}
	}
	else
		aws = -1;


}