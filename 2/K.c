#include<stdio.h>
#include<string.h>
void main() {
	char a[100]={0};
	fgets(a, 100, stdin);
	int lena = strlen(a),i,j,start ;
	if (a[lena - 1] == '\n') {
		a[lena - 1] = '\0';
	}
	for (i = 0; i < lena; i++) {
		if (a[i] == ' ') {
			for (j = i; j < lena; j++) {
				a[j] = a[j + 1];
			}
			i--;
		}
	}
	fputs(a, stdout);
}