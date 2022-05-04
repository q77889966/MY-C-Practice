#include<stdio.h>
int main() {
	int num;
	int i, j, k, m, n,mid;
	scanf("%d", &num);
	mid = (num+1) / 2;
	for (i = 1; i <= num; i++) {
		if (i <= mid) {
			j = i * 2 - 1;
			m = mid - i;
			for (n = 0; n < m; n++)
				printf(" ");
			for (k = 1; k <= j; k++)
				printf("*");
			printf("\n");
		}
		else {
			j = (num-i+1) * 2-1 ;
			m = i - mid;
			for (n = 0; n < m; n++)
				printf(" ");
			for (k = 1; k <= j; k++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}