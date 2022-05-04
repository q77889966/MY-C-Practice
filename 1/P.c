#include<stdio.h>
int main() {
	int i, j, k;
	for (i = 4; i > 0; i--) {
		for (j = 4; j > 0; j--) {
			for (k = 4; k > 0; k--) {
				if ((i != j) && (j != k) && (i != k))
					printf("%d%d%d\n", i, j, k);
			}
		}
	}
	return 0;
}