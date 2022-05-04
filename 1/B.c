#include <stdio.h>
int main() {
	int x, y;
	scanf("%d,%d", &x, &y);
	if (y == 2) {
		if ((x - 1 == 2) || (x + 1 == 2))
			printf("5");
		if ((x - 1 == -2) || (x + 1 == -2))
			printf("18");
	}
	else if (y == -2) {
		if ((x - 1 == 2) || (x + 1 == 2))
			printf("7");
		if ((x - 1 == -2) || (x + 1 == -2))
			printf("10");
	}
	else if ((y - 1 == 2) || (y + 1 == 2)) {
		if (x == 2)
			printf("5");
		if(x==-2)
			printf("18");
	}
	else if ((y - 1 == -2) || (y + 1 == -2)) {
		if (x == 2)
			printf("7");
		if (x == -2)
			printf("10");
	}
	else
		printf("0");
	return 0;
}