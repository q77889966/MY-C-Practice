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
	char str[100] = "0";
	fgets(str, 100, stdin);

	int length = strlen(str);
	for (i = 0; i <= length; i++)
		if (str[i] == '.' || str[i] == '!' || str[i] == '?')
			str[i] = '\0';
	Reverse(str, str + length - 1);
	char* start = str;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end)
			end++;
		Reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s", str);
	return 0;
}
