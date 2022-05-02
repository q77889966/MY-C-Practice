#include<stdio.h>

void spiralMatrix(int n) {
	int arr[100][100];
	int c = 1;			
	int left = 0;		 
	int right = n - 1;	
	int top = 0;		
	int bottom = n - 1;	
	int i, j;
	while (left <= right && top <= bottom) {
		for (i = left; i <= right; i++) { 
			arr[top][i] = c;
			c++;
		}
		top++;
		for (i = top; i <= bottom; i++) { 
			arr[i][right] = c;
			c++;
		}
		right--;
		for (i = right; i >= left; i--) {
			arr[bottom][i] = c;
			c++;
		}
		bottom--;
		for (i = bottom; i >= top; i--) { 
			arr[i][left] = c;
			c++;
		}
		left++;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	spiralMatrix(n);
	return 0;
}
