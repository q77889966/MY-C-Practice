#include<stdio.h>
int main() {
	int a[200]={0};
	int n,i,s,j=0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &s);
		char c = getchar();
		a[i] = s;
		if (c == '\n')
		{
			break;
		}
	}
	for (i = n; i < 2*n-1; i++) {
		a[i] = a[j] / a[j + 1];
		printf("%4d", a[i]);
		if ((j+1) % 5 == 0) {
			printf("\n");
		}
		j++;

	}
	printf("%4d", a[n - 1]);

	
	return 0;
}