#include<stdio.h>
#include<string.h>
int main() {
	
	long int x[200]={0};
	int N=1,i,j,num;
	scanf("%d", &num);
	long long int sum = 0;
	long long int result = 0;
	for (j = 0; j < num; j++) {
		char a[199] = { 0 }, fana[199] = { 0 };
		for (i = 1; i <= N; i++)
			a[i - 1] = i;

		for (i = N; i > 0; i--)
			fana[N - i] = i;
		strcat(a, fana);
		result = 0;
		for (i = 0; i < strlen(a); i++) {
			result = result * 10 + (int)a[i];
		}
		sum += result;
		printf("%lld", result);
		

		if (N != num)
			printf("+");
		else
			printf("=");
		N++;
	}
	printf("%lld", sum);
	return 0;
}