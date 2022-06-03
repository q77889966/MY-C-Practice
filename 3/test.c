#include<stdio.h>
void fun(int);
int main() {
	fun(1);
	return 0;
}

void fun(int n) {
	printf("in num:%d address:%p\n", n, &n);
	if (n < 4)
		fun(n + 1);
	printf("out num:%d address:%p\n", n, &n);
}