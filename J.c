#include<stdio.h>
#include<string.h>
void main() {
	char a[100] = { 0 }, b[100] = { 0 };
	int i, lena, lenb;
	for (i = 0; i < 100; i++) {
		if (a[i] == '\n') {
			a[i] = '\0';
		}
		if (b[i] == '\n') {
			b[i] = '\0';
		}
	}
	lena = strlen(a) ;
	lenb = strlen(b) ;
}