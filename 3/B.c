
#include <stdio.h>
#include <stdlib.h>

void main() {
	void doubleCheck(int a, int b, int c, int d[]);
	int d[50] = { 0 }, i, n, key;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &d[i]);
	}
	scanf("%d", &key);
	doubleCheck(0, n - 1, key, d);

}

void doubleCheck(int a, int b, int c, int d[]) {//a为数组的下界，b为数组的上界，c为匹配目标,d为查找的范围数组。
	int x = (a + b) / 2;

	if (d[x] == c)
	{
		printf("%d", x);
	}
	if (d[x] > c)//说明在d[a]-d[x]范围之中
	{
		printf("%d ", d[x]);
		doubleCheck(a, x - 1, c, d);
	}
	if (d[x] < c)
	{
		printf("%d ", d[x]);
		doubleCheck(x + 1, b, c, d);
	}
	if (a > b)
		printf("-1");


}