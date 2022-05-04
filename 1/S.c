#include<stdio.h>
#include<math.h>
int main() {
	float a;
	
	scanf("%f", &a);
	double result = a;
	while (1) {
		if (fabs((result + a / result) / 2 - result) <= 0.0000006)
			break;
		result = (result + a / result) / 2;
		
	}
	printf("%lf", result);
	return 0;
}