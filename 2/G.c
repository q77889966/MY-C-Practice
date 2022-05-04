#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main() {
	int i,j=0,k,len;
	char str[100]={0},tmp[100];
	int num;
	fgets(str, 100, stdin);
	len = strlen(str)-1;
	for (i = 0; i < len;i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			tmp[j] = str[i];
			j++;
			if (str[i + 1] < '0' || str[i + 1]>'9') {
				num = atoi(tmp);
				printf("%d\n", num);
				for (k = 0; k < 100; k++)
					tmp[k] = '\0';
				j = 0;
			}
		}

	}
	return 0;
}