#include<stdio.h>
int a[50] = { 0 };

void doubleCheck(int a, int b, int c) {//a为数组的下界，b为数组的上界，c为匹配目标,d为查找的范围数组。
	int x = (a + b) / 2;
	//递归的结束条件一定要写在判断条件之前。
	if (a[x] == c)
	{
		printf("%d", x);
	}
	if (a[x] > c)//说明在d[a]-d[x]范围之中
	{
		doubleCheck(a, x - 1, c);
	}
	if (a[x] < c)
	{
		doubleCheck(x + 1, b, c);
	}



}
void main() {
	int n, i, aim;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &aim);
	doubleCheck(0, n - 1, aim);
}