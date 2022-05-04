#include <stdio.h>
#include<string.h>
int main() {
	int eg=0, num=0, oth=0,sp=0,i;
	char x[999];
	fgets(x, 999, stdin);
	int len = strlen(x);
	for (i = 0; i < len - 1; i++) {
		if ((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
			eg++;
		else if (x[i] == ' ') {
			sp++;
		}

		else if (x[i] >= '0' && x[i] <= '9') {
			num++;
		}

		else oth++;
	}
	printf("char=%d space=%d digit=%d others=%d", eg, sp, num, oth);
	return 0;
}