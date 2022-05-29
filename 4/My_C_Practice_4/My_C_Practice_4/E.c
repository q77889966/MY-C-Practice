#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[100] = { 0 };
	int i, tmp, max = 0, j;
	char c;
	FILE* fp;
	fp = fopen("rand.txt", "r");
	i = 0;
	while (1) {
		while (1) {
			fscanf(fp, "%d", &a[i]);
			i++;
			c = fgetc(fp);
			if (c == '\n' || c == EOF)
			{
				break;
			}

		}
		if (c == EOF)
		{
			break;
		}
	}
	fclose(fp);
	for (j = 0; j < 100; j++)
		for (i = 0; i < 99; i++) {
			if (a[i] < a[i + 1]) {
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
			}
		}
	printf("%d", a[9]);

	return 0;
}