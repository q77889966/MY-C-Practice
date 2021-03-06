#include<stdio.h>
#include<stdlib.h>
typedef struct ch {
	char c;
	struct ch* next;
}NODE;
NODE* create(char* fp) {
	NODE* head_1, * tail_1, * newp;
	head_1 = tail_1 = (NODE*)malloc(sizeof(NODE));
	do {
		newp = (NODE*)malloc(sizeof(NODE));
		newp->c = *fp;
		tail_1->next = newp;
		tail_1 = newp;
		fp++;
	} while (*fp != '\n' && *fp != '\0');

	tail_1->next = NULL;
	return head_1;
}
void print(NODE* head) {
	head = head->next;
	while (head != NULL) {
		printf("%c", head->c);
		head = head->next;
	}
}
int main() {
	char data[20] = { 0 };
	char* fp = data;
	char c_1, c_2;
	int n, i;
	fgets(data, 20, stdin);
	NODE* head_1 = create(fp);
	NODE* head_2 = head_1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		head_1 = head_1->next;
	}
	c_1 = head_1->c;
	c_2 = head_1->next->c;
	head_1->c = c_2;
	head_1->next->c = c_1;
	print(head_2);
	return 0;
}