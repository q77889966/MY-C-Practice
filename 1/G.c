#include<stdio.h>
void main(){
double s = 0.0, t_1 = 1, t_2 = 2, temp;
int n, i;
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
	s = s + t_2 / t_1;
	temp = t_2;
	t_2 = t_1 + t_2;
	t_1 = temp;
}
printf("%lf", s);
}