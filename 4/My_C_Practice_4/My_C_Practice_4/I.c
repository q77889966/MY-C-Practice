#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE* fp;
	char ch;
	fp = fopen("input.txt", "r");
	int a[20][20] = { 0 };
	int i, j, num = 0;
	int flag = 0;
	while (1) {
		ch = getc(fp);
		if (ch == '\n')
			break;
		else if (ch != ' ' && flag == 0) {
			num++;
			flag = 1;
		}
		else if (ch == ' ')
			flag = 0;

	}
	rewind(fp);
	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			fscanf(fp, "%d", &a[i][j]);
		}
	}
	fclose(fp);
	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			printf("%4d", a[j][i]);
			if (j == num - 1 && i != num - 1)
				printf("\n");
		}
	}
	return 0;
}