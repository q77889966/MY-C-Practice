#include <stdio.h>

#include <string.h>

void fun(char* s, char* t)

{
	for (int i = 0; i < 80; i++)
	{
		t[i] = s[2 * i];
	}
}

main()

{
	char s[80], t[80];

	printf("\n please enter string s:");

	gets(s);

	fun(s, t);

	printf("\n the  result is %s\n ", t);

}