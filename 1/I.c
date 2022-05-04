#include<stdio.h>
#include<string.h>
void main()
{
	char a[99];
	int i;
	fgets(a, 99, stdin);
	int len = strlen(a);
	for (i = 0; i < len-1; i++) {
		if (a[i] - 65 > 26)
			a[i] = a[i] - 32;
		else
			a[i] = a[i] + 32;
	}
	fputs(a, stdout);
}
