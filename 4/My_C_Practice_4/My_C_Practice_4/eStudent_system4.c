#include<stdio.h>
#include<stdlib.h>
struct stu {
	int num;
	float score;
};
struct stu_2 {
	int num;
	int count;
	float score;
	float p_60;
	float p_85;
	float max;
	float min;
};
void rank(struct stu* s, int n) {
	int i, k;
	struct stu temp;

	for (k = 1; k < n; k++)
		for (i = n - 1; i >= k; i--)
			if (s[i].score > s[i - 1].score)
			{
				temp = s[i];
				s[i] = s[i - 1];
				s[i - 1] = temp;
			}

}
void rank_2(struct stu_2* s) {
	int i, k;
	struct stu_2 temp;

	for (k = 1; k < 5; k++)
		for (i = 4; i >= k; i--)
			if (s[i].max > s[i - 1].max)
			{
				temp = s[i];
				s[i] = s[i - 1];
				s[i - 1] = temp;
			}

}

void main() {
	printf("[eStudent_system4]\n");
	struct stu s[10];
	int i = 0, j, max_n, min_n;
	float sum = 0, tmp_max = 0, tmp_min = 100, max_s, min_s;
	int count;
	while (1) {
		printf("请输入学号\n");
		scanf("%d", &s[i].num);
		if (s[i].num == -1)
			break;
		getchar();
		printf("请输入成绩\n");
		scanf("%f", &s[i].score);
		getchar();
		i++;
	}
	rank(s, i);

	for (j = 0; j < i; j++) {
		sum = sum + s[j].score;
	}
	sum = sum / i;
	printf("平均成绩：%.2f\n", sum);

	FILE* fp;
	fp = fopen("bkao.txt", "w+");

	count = 0;
	for (j = 0; j < i; j++) {
		if (s[j].score >= 60) {
			count++;
		}
		else
			fprintf(fp, "%d\n", s[j].num);
	}
	printf("合格率：%.2f\n", (float)count / (float)i);

	fclose(fp);

	count = 0;
	for (j = 0; j < i; j++) {
		if (s[j].score >= 85) {
			count++;
		}
	}
	printf("优秀率：%.2f\n", (float)count / (float)i);


	for (j = 0; j < i; j++) {
		if (s[j].score > tmp_max) {
			tmp_max = s[j].score;
			max_n = s[j].num;
			max_s = s[j].score;
		}
		if (s[j].score < tmp_min) {
			tmp_min = s[j].score;
			min_n = s[j].num;
			min_s = s[j].score;
		}
	}
	printf("班级最高分：%.2f %d号\n班级最低分：%.2f %d号\n", max_s, max_n, min_s, min_n);

	rank(s, i);
	printf("学号  成绩\n");
	fp = fopen("score.txt", "w+");
	for (j = 0; j < i; j++) {
		printf("%-6d", s[j].num);
		printf("%.3f\n", s[j].score);
		fprintf(fp, "%-6d", s[j].num);
		fprintf(fp, "%.3f\n", s[j].score);
	}
	fclose(fp);
	fp = fopen("student.txt", "r");

	struct stu_2 s1[5];
	for (j = 0; j < 5; j++) {
		fscanf(fp, "%d", &s1[j].num);
		fscanf(fp, "%d", &s1[j].count);
		while (1) {
			if (s1[j].count <= 0) {
				printf("%d班人数异常，请重新输入\n", s1[j].num);
				scanf("%d", &s1[j].count);
			}
			else
				break;
		}
		fscanf(fp, "%f", &s1[j].score);
		fscanf(fp, "%f", &s1[j].p_60);
		fscanf(fp, "%f", &s1[j].p_85);
		fscanf(fp, "%f", &s1[j].max);
		fscanf(fp, "%f", &s1[j].min);
	}
	rank_2(s1);
	printf("班级号 学生数 平均成绩 合格率 优秀率 班级最高分 班级最低分\n");
	for (j = 0; j < 5; j++)
		printf("%-4d   %-2d     %-4.2f     %-4.2f   %-4.2f   %-4.2f      %-.2f\n", s1[j].num, s1[j].count, s1[j].score, s1[j].p_60, s1[j].p_85, s1[j].max, s1[j].min);
}