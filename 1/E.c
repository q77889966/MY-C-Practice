#include<stdio.h>
int main() {
	int num,i,j,tmp;
	scanf("%d", &num);
	int a[20];
	a[num] = '\0';
	for (i = 1; i <= num; i++)
		a[i-1] = i;
	for (j = 0; j <= num; j++) {
		for (i = 0; i < num; i++)
			printf("%d", a[i]); 
		printf("\n");
		tmp = a[num-1];
		for (i = num-1; i >0; i--)
			a[i] = a[i - 1];
		a[0] = tmp;
	}
	return 0;
}