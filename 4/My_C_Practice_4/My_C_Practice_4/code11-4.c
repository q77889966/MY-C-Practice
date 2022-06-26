#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[99] = { 0 }, * p;
	gets(str);
	p = str;
	while (p)
	{
		if (p = strstr(p, "the"))
		{
			p++;
			p++;
			(*p) = 'i';
			p++;
			(*p) = 's';
			p++;
		}
	}
	p = str;
	for (i = 0; i < 99; i++) {
		if (*p == '\0')
			break;
		if (p == strstr(p, "this")) {
			printf("%c", *p);
			p++;
			printf("%c", *p);
			p++;
			printf("%c", *p);
			p++;
			printf("%c", *p);
			p++;
			printf(" ");
			continue;

		}
		printf("%c", *p);
		p++;
	}
}