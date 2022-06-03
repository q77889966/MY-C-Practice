#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	FILE* fp;
	fp = fopen("input.txt", "r");
	char* p[20] = { 0 };
	char* tmp;
	int i = 0, k, j, count = 0;
	for (i = 0; i < 20; i++) {

		p[i] = (char*)malloc(99);
		if (fgets(p[i], 99, fp) == NULL)
			break;
		for (j = 0; j < 30; j++) {
			if (p[i][j] == '\n')
				p[i][j] = '\0';
		}
		count++;
	}
	for (i = 0; i < 20; i++)
	{
		k = i;
		for (j = i + 1; j < count; j++)
			if (strcmp(p[j], p[k]) < 0)
				k = j;
		if (k != i)
		{
			tmp = p[i];
			p[i] = p[k];
			p[k] = tmp;
		}
	}
	for (i = 0; i < count; i++) {
		puts(p[i]);
	}
	return 0;
}