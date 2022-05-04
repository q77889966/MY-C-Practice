#include<stdio.h>
int main() {
	int x1, x2, x3, x4,tmp,i;
	scanf("%d,%d,%d,%d", &x1, &x2, &x3, &x4);
	for (i = 0; i <= 3; i++) {
		if (x1 > x2) {
			tmp = x2;
			x2 = x1;
			x1 = tmp;
		}
		if (x2 > x3) {
			tmp = x3;
			x3 = x2;
			x2 = tmp;
		}
		if (x3 > x4) {
			tmp = x4;
			x4 = x3;
			x3 = tmp;
		}
	}
	printf("%d,%d,%d,%d", x1, x2, x3, x4);
	return 0;
}