#include <stdio.h>
#include <string.h>

void Reverse(char* left, char* right)
{
	while (left <= right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	int i;
	char str[100] = { 0 };
	fgets(str, 100, stdin);
	char mark = 0;
	int len = strlen(str);
	for (i = 0; i <= len; i++)
		if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
			mark = str[i];
			str[i] = '\n';
		}
	Reverse(str, str + len - 1);
	char* start = str;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0' && *end != ',' && *end != '.' && *end != '?' & *end != '!')
			end++;
		Reverse(start, end - 1);
		if (*end == '\0')
			start = end;
		else
			start = end + 1;
	}
	for (i = 0; i < len; i++) {
		if (str[i] == '\n')
			str[i] = '\0';
	}
	for (i = len - 1; i >= 0; i--) {
		if (str[i] != '\0')
			printf("%c", str[i]);
	}

	printf("%c", mark);
	return 0;
}
