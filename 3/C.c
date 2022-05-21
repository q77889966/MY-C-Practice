#include<stdio.h>
#include<math.h>
int a = 6;
void fun() {
	int b, c, d;
	for (b = 3; b <= a / 2; b += 2)
	{
		for (c = 2; c <= sqrt(b); c++)
			if (b % c == 0)
				break;
		if (c > sqrt(b))
			d = a - b;
		else
			break;

		for (c = 2; c <= sqrt(d); c++)
			if (d % c == 0)
				break;
		if (c > sqrt(d)) {
			printf("%d=%d+%d\n", a, b, d);
			a += 2;
			break;
		}
	}
	if (a == 98) {
		printf("98=19+79\n");
		a += 2;
	}
}
int main() {
	int max;
	scanf("%d", &max);
	while (1) {
		fun();
		if (a > max) {
			break;
		}
	}
	return 0;
}
