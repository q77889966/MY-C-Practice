#include<stdio.h>
int main() {
	int num;
	int i,j,k,m,n;
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		j = i * 2 - 1;
		m = num - i;
		for (n = 0; n < m; n++)
			printf(" ");
		for (k = 1; k <= j; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}