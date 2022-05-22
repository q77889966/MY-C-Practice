#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = { 0 };
	char rev[100] = { 0 };
	int i, j = 0, k, m;
	fgets(str, 100, stdin);
	int len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == '\n') {
			str[i] = 0;
		}
	}
	for (i = 0; i < len; i++) {

		if (str[i] == ' ' || str[i] == '.' || str[i] == '!' || str[i] == '?') {
			for (k = j - 1; k >= 0; k--) {
				printf("%c", rev[k]);
				if (k == 0) {
					printf("%c", str[i]);
					j = 0;
					for (m = 0; m < 100; m++) {
						rev[m] = 0;
					}
					break;
				}
			}
		}
		else
			rev[j] = str[i];
		j++;
	}
	return 0;
}
