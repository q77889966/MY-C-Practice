#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[100] = { 0 };
	int i;
	FILE* fp;
	fp = fopen("rand.txt", "r");

	a[0] = fgetc(fp);

	fclose(fp);
	return 0;
}