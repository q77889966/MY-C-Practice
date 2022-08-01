#include<stdio.h>
#include<stdbool.h>
int a[100][100];
int px[] = { 0,1,0,-1 }, py[] = { 1,0,-1,0 };
int n;
bool flag[100][100];

void dfs(int x, int y) {
	int i, j;
	if (x == n && y == n) {
		flag[x][y] = 1;
		if (flag[x - 1][y]) {
			a[x][y] = a[x - 1][y];
		}
		else
			a[x][y] = a[x][y - 1];
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (a[i][j] == 0)
					printf("#");
				else if (flag[i][j] == 1)
					printf("%d", a[i][j]);
				else
					printf("O");
			}
			printf("\n");
		}
		exit(0);
	}
	for (i = 0; i <= 3; i++) {
		int fx = x + px[i];
		int fy = y + py[i];
		if (fx<1 || fy<1 || fx>n || fy>n || a[fx][fy] == 0 || flag[fx][fy] == 1)
			continue;

		a[x][y] = i + 1;
		flag[x][y] = 1;
		dfs(fx, fy);
		flag[x][y] = 0;
	}
}

int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	}
	dfs(1, 1);
	printf("No Path!");
	return 0;
}