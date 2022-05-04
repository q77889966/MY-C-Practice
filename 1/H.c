#include<stdio.h>
void main() {
	int n,i,sum = 0,j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int aws = 1;
		for (j = 1; j <= i; j++)
			aws = j * aws;
		sum = sum + aws;
	}
	printf("%d", sum);
	
}