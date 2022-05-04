#include<stdio.h>
#include<string.h>
int main()
{
	int j, i;
	char a[20];
	fgets(a, 20, stdin);
	j = strlen(a)-1;
	for (i = 0; i < j / 2; i++)
	{
		if (a[i] != a[j - i - 1])
			break;
	}
	if (i >= j / 2) printf("YES");
	else printf("NO");
	return 0;
}