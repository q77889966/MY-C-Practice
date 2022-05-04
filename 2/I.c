#include<stdio.h>
#include<string.h>
void main() {
	char a[100] = { 0 }, b[100] = { 0 },tmp[100] = {0};
	int lena, lenb, i, j = 0,k=0;
	char max, max_p;
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	lena = strlen(a) - 1;
	lenb = strlen(b)-1;
	for (i = 0; i < 100; i++) {
		if (a[i] == '\n') {
			a[i] = '\0';
		}
		if (b[i] == '\n') {
			b[i] = '\0';
		}
	}
	max = a[0];
	max_p = 0;
	for (i = 1; i < lena; i++) {
		if (a[i] > max) {
			max = a[i];
			max_p = i;
		}
	}
	for (i = max_p + 1; i < 90; i++) {
		if (a[i] == '\0')
			break;
		tmp[j] = a[i];
		a[i] = '\0';
		j++;
	}
	strcat(a, b);
	strcat(a, tmp);
	fputs(a, stdout);
}