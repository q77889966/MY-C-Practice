#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
char result_1[100] = { 0 };
char rev[100] = { 0 };
char result_2[100] = { 0 };
int i = 0;
void fun() {
	int n;
	scanf("%d", &n);
	int a[100] = { 0 };
	int tmp;
	int  k = 0;
	if (n < 0) {
		n = abs(n);
		result_1[0] = '-';
		k = 1;
	}
	while (1)
	{
		tmp = n % 16;
		a[i] = tmp;
		i++;
		n = n / 16;
		if (n == 0)
		{
			break;
		}
	}
	int j;
	for (j = i - 1; j >= 0; j--)
	{
		switch (a[j])
		{
		case 10:
			result_1[k] = 'a';
			break;
		case 11:
			result_1[k] = 'b';
			break;
		case 12:
			result_1[k] = 'c';
			break;
		case 13:
			result_1[k] = 'd';
			break;
		case 14:
			result_1[k] = 'e';
			break;
		case 15:
			result_1[k] = 'f';
			break;
		case 16:
			result_1[k] = 'g';
			break;
		default:
			result_1[k] = '0' + a[j];
			break;
		}
		k++;
	}

}

int main() {

	fun();
	int l;
	getchar();
	fgets(result_2, 100, stdin);
	int len = strlen(result_1) - 1;
	if (result_1[0] == '-') {
		rev[0] = '-';
		for (l = 1; l <= len; l++) {
			rev[l] = result_1[len - l + 1];
		}
	}
	else {
		for (l = 0; l <= len; l++) {
			rev[l] = result_1[len - l];
		}
	}
	int aws = strcmp(rev, result_2);
	fputs(rev, stdout);
	if (aws < 0) {
		printf("<");
	}
	else if (aws == 0) {
		printf("=");
	}
	else
		printf(">");
	fputs(result_2, stdout);
	return 0;
}
