#include <stdio.h>
#include<stdlib.h>
int main() {
	char ch1[100];
	char ch2[100];
	int i;

	fgets(ch1, 100, stdin);
	fgets(ch2, 100, stdin);

	int temp = 0;

	for (i = 0; i <= 100; i++) {

		if (ch1[i] > ch2[i]) {
			temp = temp + 1;
		}

		else if (ch1[i] < ch2[i]) {
			temp = temp - 1;
		}
		if ((temp == 1) || (temp == -1) || (ch1[i] == '\0') || (ch2[i] == '\0')) {
			break;
		}
	}
	if (temp != 0) {
		for (i = 0; i < 100; i++) {
			if (ch1[i] != ch2[i]) {
				temp = ch1[i] - ch2[i];
				break;
			}
		}
	}
	printf("%d", temp);
	return 0;
}