#include<stdio.h>
int main() {
	int num;
	int i, j, k, m, n;
	char result='A';
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {

		j = i * 2 - 1;
		m = num - i;
		for (n = 0; n < m; n++)
			printf(" ");
		for (k = 1; k <= j / 2+1; k++) {
			printf("%c", result);
			if(k!=j/2+1)
				result = result + 1;
		}
		if(result!='A')
			result = result - 1;
		for (k = 1; k <= j / 2 ; k++) {
			printf("%c", result);
			if (k != j / 2 )
				result = result - 1;
		}
		printf("\n");
	}
	return 0;
}