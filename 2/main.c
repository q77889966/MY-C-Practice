#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include <stdlib.h>
char PrtWelcom(int flag) {
	int n = 3;

	if (flag == 0)
		printf("请选择[1 2 3]:");
	char c;
	c = getch();
	return c;
}
void fun_1() {
	system("cls");//清屏
	int eg = 0, num = 0, oth = 0, sp = 0, i;
	char x[999];
	printf("pls input char:");
	fgets(x, 999, stdin);
	int len = strlen(x);
	for (i = 0; i < len - 1; i++) {
		if ((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
			eg++;
		else if (x[i] == ' ') {
			sp++;
		}

		else if (x[i] >= '0' && x[i] <= '9')
			num++;
		else
			oth++;
	}
	printf("char=%d space=%d digit=%d others=%d\n", eg, sp, num, oth);
	printf("按任意键返回");
	getch();
	main();
	system("cls");
}
void fun_2() {
	system("cls");
	int i, j = 0, k, len;
	char str[100] = { 0 }, tmp[100];
	int num;
	int sum = 0;
	printf("pls input char:");
	fgets(str, 100, stdin);
	len = strlen(str) - 1;
	for (i = 0; i < len; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			tmp[j] = str[i];
			j++;
			if (str[i + 1] < '0' || str[i + 1]>'9') {
				num = atoi(tmp);//字符数组转整形
				sum += num;
				for (k = 0; k < 100; k++)
					tmp[k] = '\0';
				j = 0;
			}
		}

	}
	printf("%d\n", sum);
	printf("按任意键返回");
	getch();
	main();
	system("cls");
}
void fun_3() {
	system("cls");
	printf("pls input number:");
	char num_1[9999] = { 0 };
	char num_2[9999] = { 0 };
	int result[9999] = { 0 };
	int t1[9999] = { 0 };
	int t2[9999] = { 0 };
	int len_max = 0, len_1 = 0, len_2 = 0, i, j;

	scanf("%s %s", &num_1, &num_2);
	len_1 = strlen(num_1);
	len_2 = strlen(num_2);

	if (len_1 > len_2)//最高位数
		len_max = len_1 - 1;
	else
		len_max = len_2 - 1;

	for (i = 0, j = len_1 - 1; j >= 0; i++, j--)
		t1[i] = num_1[j] - '0';//计算每一位的数值

	for (i = 0, j = len_2 - 1; j >= 0; i++, j--)
		t2[i] = num_2[j] - '0';

	for (i = 0; i < len_max + 1; i++)
	{
		result[i] = result[i] + t1[i] + t2[i];//每位都做加法
		if (result[i] > 9)//进位
		{
			result[i + 1]++;
			result[i] -= 10;
		}
	}

	if (result[len_max + 1] > 0)
		len_max++;

	for (i = len_max; i >= 0; i--)//从最高位开始打印结果数组
		printf("%d", result[i]);
	printf("\n按任意键返回");
	getch();
	main();
	system("cls");
}

int main() {
	system("cls");
	int flag = 0;
	char c;
	while (1) {
		c = PrtWelcom(flag);
		if (c == 27)                       //ESC
			exit(0);
		else if (c == '1')
			fun_1();
		else if (c == '2')
			fun_2();
		else if (c == '3')
			fun_3();
	}
}