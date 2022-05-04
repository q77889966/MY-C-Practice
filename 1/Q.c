#include<stdio.h>
#include<math.h>
int main() {
	int i=2,j=2,k=1;//i为判断奇偶，j为上标,k为计数器
	double x,sum=1,result=0,p=1;
	scanf_s("%lf", &x);
	while(x > 2 * M_PI){
		x -= 2 * M_PI;
	}
	while(1){
		for (k = 1; k <= j; k++) 
			p = p * k;


		result = pow(x, j) / p;
		if (i % 2 != 0)
			sum = sum + result;
		else
			sum = sum - result;

		if (fabs(result) < 0.0000001)
			break;
		i++;
		j = j + 2;
		p = 1;
	}
	printf("%.3lf",sum);
	return 0;
}