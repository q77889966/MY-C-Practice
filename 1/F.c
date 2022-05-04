#include <stdio.h>

int main() {
	int num, j, k = 0;
	scanf("%d", &num);
	j = num;
	while (j) {
		k = k * 10 + j % 10;
		j = j/10;
	}
	if (k == num)
		printf("YES");
	else
		printf("NO");
	return 0;
}