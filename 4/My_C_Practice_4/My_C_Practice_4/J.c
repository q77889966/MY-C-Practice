#include<stdio.h>
#include<stdlib.h>
int pass[20] = { 0 };
int last_i = 0;
int num_i;
void move(int);
int count() {
	int i, j = 0;
	for (i = 0; i < 20; i++)
		if (pass[i] != 0)
			j++;
	return j;
}
int main() {
	FILE* fp;
	int i = 0;
	fp = fopen("input.txt", "r");
	for (i = 0; i < 20; i++) {
		fscanf(fp, "%d", &pass[i]);
	}
	i = 0;

	int step = pass[0];
	num_i = count();
	move(step);
	return 0;
}
void move(int step) {
	int num = count();
	int num_end = 0;//表示i后面有多少人
	int num_start = 0;
	if (num == 0) {
		exit(0);
	}
	int i = last_i, j = 1, k;
	int aws;
	int flag = num_i - i;
	for (k = 0; k < flag; k++) {
		if (pass[i] != 0)
			num_end = pass[i];
		i++;
	}
	for (k = 0; k < 20; k++) {
		if (pass[k] != 0) {
			num_start = k;
			break;
		}
	}
	/*for (i = 0; i < 20; i++) {
		if (pass[i] != 0)
			break;
	}*/
	//int flag = num_i - i;
	/*for (k = 0; k < flag; k++) {
		if (pass[i] != 0)
			num_end++;
		i++;
	}*/
	/*for (k = 0; k < last_i; k++) {
		if (pass[k] != 0)
			num_start++;
	}*/
	i = last_i;
	/*for (k = 0; k < 20; k++) {
		if (step > num_end) {
			step = step - num_end;
			for (i = 0; i < num_i; i++)
				if (pass[i] != 0)
					break;
			num_start = i;
			num_end = 0;
			flag = num_i - i;
			for (k = 0; k < flag; k++) {
				if (pass[i] != 0)
					num_end++;
				i++;
			}
			i = num_start + 1;
		}
	}*/
	//if (pass[i + step - 1] != 0) {
	for (; i <= num_i; i++) {
		if (j == step) {
			printf("%4d", i + 1);
			aws = pass[i];
			pass[i] = 0;
			last_i = i + 1;
			move(aws);
			break;
		}
		if (pass[i] != 0)
			j++;
		if (pass[i] == num_end) {
			i = num_start;
			step = step - j;
		}
	}
	//}
}
