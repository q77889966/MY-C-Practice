#include<stdio.h>
#include<string.h>
main() {
	char str1[100], str2[100];
	int i = 0, flag = 0, aws;
	gets(str1);
	gets(str2);
	while ((str1[i] == str2[i]) && (str1[i] != '\0'))
		i++;
	if (str1[i] == '\0' && str2[i] == '\0') {
		aws = 0;
	}
	else {
		aws = str1[i] - str2[i];
	}
	printf("%d", aws);
}