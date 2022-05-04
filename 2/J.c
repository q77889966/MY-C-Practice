#include<stdio.h>
#include<string.h>
void main() {
	char a[100] = { 0 }, b[100] = { 0 },fanb[100] = { 0 };
	int i,j=0, lena, lenb,flag=-1;
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	lena = strlen(a);
	for (i = 0; i < lena+1; i++) {
		if (a[i] == '\n') {
			a[i] = '\0';
		}
		if (b[i] == '\n') {
			b[i] = '\0';
		}
	}
	lena = strlen(a) ;
	lenb = strlen(b) ;

	for (i = 0; i < lenb; i++) {
		fanb[i] = b[lenb - i-1];
	}
	for (i = 0; i < lena + 1; i++) {
		if (a[i] == fanb[j]) {
			int tmp = i+1;
			flag = i;
			for (j = 1; j < lenb; j++) {
				if (a[tmp] != fanb[j]) {
					flag = -1;
					break;
				}
				tmp++;
	 		}
		}
		if (flag != -1)
			break;
	}
	printf("%d", flag);
}