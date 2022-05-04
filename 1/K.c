#include<stdio.h>
#include<math.h>
void main() {
	int x, y,i;
	scanf("%d,%d", &x, &y);
	long int aws=1;
	for (i = 1; i <= y; i++) {
		aws = aws * x;
		aws = aws % 1000000;
	}
	aws = aws % 1000;
	printf("%ld", aws);

}