#include <stdio.h>
#include<string.h>
#include<assert.h>

int str(char* p1, char* p2)
{
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	return *p1 - *p2;
}
int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	fgets(arr1, 100, stdin);
	fgets(arr2, 100, stdin);
	printf("%d\n", str(arr1, arr2));
	return 0;
}