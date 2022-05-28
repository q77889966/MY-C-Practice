#include<stdio.h>
#include<stdlib.h>
typedef struct ch {
	char c;
	struct ch* next;
}NODE;
NODE* create(FILE* fp) {
	char cha;
	cha = fgetc(fp);
	NODE* head_1, * tail_1, * newp, * head_2, * tail_2;
	head_1 = tail_1 = (NODE*)malloc(sizeof(NODE));
	while (cha != '\n') {
		newp = (NODE*)malloc(sizeof(NODE));
		newp->c = cha;
		tail_1->next = newp;
		tail_1 = newp;
		cha = fgetc(fp);
	}
	cha = fgetc(fp);
	head_2 = tail_2 = (NODE*)malloc(sizeof(NODE));
	while (!feof(fp)) {
		newp = (NODE*)malloc(sizeof(NODE));
		newp->c = cha;
		tail_2->next = newp;
		tail_2 = newp;
		cha = fgetc(fp);
	}
	tail_2->next = NULL;
	tail_1->next = head_2->next;
	return head_1;
}
void print(NODE* head) {
	FILE* fp_1;
	fp_1 = fopen("output.txt", "w");
	head = head->next;
	while (head != NULL) {
		putc(head->c, fp_1);
		head = head->next;
	}
	fclose(fp_1);
}
int main() {
	FILE* fp;
	fp = fopen("input.txt", "r");
	NODE* head_1 = create(fp);
	print(head_1);
	fclose(fp);

	return 0;
}