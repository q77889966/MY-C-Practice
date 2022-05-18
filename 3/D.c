#include <stdio.h>
#include<string.h>
#include<stdlib.h>
char result_1[100] = { 0 };
char result_2[100] = { 0 };
int i = 0;
void fun() {
	int n;
	scanf("%d", &n);
	int a[100] = { 0 };
	int tmp;
	int  k = 0;
	if (n < 0) {
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
		case 12:result_1[k] = 'c'; break;
		case 13:result_1[k] = 'd'; break;
		case 14:result_1[k] = 'e'; break;
		case 15:result_1[k] = 'f'; break;
		case 16:result_1[k] = 'g'; break;
		default:result_1[k] = '0' + a[j]; break;
		}
		k++;
	}

}
void c() {
	fgets(result_2, 100, stdin);
}
int main() {
	int k = 0;
	char n;
	fun();
	getchar();
	c();
	int aws = strcmp(result_1, result_2);
	fputs(result_1, stdout);
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