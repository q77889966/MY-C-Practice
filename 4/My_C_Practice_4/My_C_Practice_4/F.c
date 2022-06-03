#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[20] = { 0 };
	FILE* fp;
	fp = fopen("input.txt", "r");
	int i = 0, n;
	fscanf(fp, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fp, "%d", &a[i]);
	}
	for (i = n - 1; i >= 0; i--) {
		printf("%3d", a[i]);
	}
	return 0;
}