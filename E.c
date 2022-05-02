#include <stdio.h>
int main() {
	int i, j,k, m,n,max=0,min=0,tmp_m,tmp_n,flag=0;
	int a[10][10]={0};
	scanf("%d,%d", &m,&n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%8d", &a[i][j]);
	}
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				tmp_m = i;
				tmp_n = j;
			}
			if (j == n - 1) {
				min = a[tmp_m][tmp_n];
				for (k = 0; k < m; k++) {
					if (a[k][tmp_n] < min)
						break;
					if (k == m - 1) {
						flag = 1;
					}
				}
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		printf("(%d,%d)=%d", tmp_m, tmp_n, a[tmp_m][tmp_n]);
	else
		printf("NO");
	return 0;
}