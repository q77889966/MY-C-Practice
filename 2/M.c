#include<stdio.h>
#include<math.h>

int main()
{
	float aws_1, aws_2;
	int n, i, j, flag = 1, k;
	scanf("%d", &n);
	for (i = 10; i >= -10; i--) {
		if (i < 0)
			flag = -1;
		aws_1 = asin(i / 10.0) * 10 * flag;
		if (i == 0)
			aws_2 = 30;
		else
			aws_2 = 31 - aws_1;

		for (j = 0; j < n; j++) {
			if ((i > 0 && j % 2 == 1) || i < 0 && j % 2 == 0) {
				for (k = 0; k <= 31; k++)
					printf(" ");
			}
			else {
				for (k = 0; k <= 31; k++) {
					if (k == (int)aws_1 || k == (int)aws_2) {
						printf("*");
					}
					else
						printf(" ");
				}
			}
			printf("\b\b");
		}
		printf("\n");
		if (i == 0 && n == 1)
			break;
	}
	return 0;
}