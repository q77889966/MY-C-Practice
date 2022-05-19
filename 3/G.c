#include <stdio.h>
#include <string.h>
int main() {
	char a[100] = { 0 };
	int i, num = 0, k = 0;
	fgets(a, 100, stdin);
	for (i = 0; i < 100; i++) {
		if (a[i] == ' ') {
			if (num < k) {
				num = k;
			}
			k = -1;
		}
		else if (a[i] == '.' || a[i] == '!' || a[i] == '?') {
			if (num < k) {
				num = k;
			}
			k = 0;
			break;
		}
		k++;
	}
	for (i = 0; i < 100; i++) {
		if (a[i] == ' ') {
			if (k == num) {
				for (i = i - k; i <= k; i++)
					printf("%c", a[i]);
			}
			k = -1;
		}
		if (a[i] == '.' || a[i] == '!' || a[i] == '?') {
			if (k == num) {
				i = i - k;
				while (1) {
					if (a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == ' ')
						break;
					printf("%c", a[i]);
					i++;
				}
			}
			break;
		}
		k++;
	}
	return 0;
}