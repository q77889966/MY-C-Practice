#include<string.h>
#include<stdio.h>
void main() {
	char a[100]={0}, b[100]={0};
	int lena,lenb,i,j=0;
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	lena = strlen(a) - 1;
	lenb = strlen(b) ;
	for (i = lena; i < lenb+lena; i++) {
		a[i] = b[j];
		j++;
	}
	fputs(a, stdout);
}