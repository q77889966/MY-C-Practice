#include<stdio.h>
#include<string.h>
void main() {
	int eg, num, oth,space,i;
	eg = 0;
	num = 0;
	oth = 0;
	space = 0;
	int len;
	char x[100]={0};
	fgets(x, 100, stdin);
	len = strlen(x);
	for (i = 0; i < x;i++) {
		if (x[i] == '\0')
			break;
		if ((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
			eg++;

		else if (x[i] == ' ')
			space++;

		else if (x[i] >= '0' && x[i] <= '9') {
			num++;
		}

		
		
		else oth++;
	}

	printf("char=%d space=%d digit=%d others=%d", eg, space,num, oth);
}