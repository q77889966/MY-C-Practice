#include<stdio.h>
#include<stdlib.h>
typedef struct ch {
	char c;
	struct ch* next;
}NODE;
NODE* create(char* fp, char* fp2, int n) {
	int i;
	NODE* head_1, * tail_1, * newp, * head_2, * tail_2, * head, * p;
	head_1 = tail_1 = (NODE*)malloc(sizeof(NODE));
	do {
		newp = (NODE*)malloc(sizeof(NODE));
		newp->c = *fp;
		tail_1->next = newp;
		tail_1 = newp;
		fp++;
	} while (*fp != '\n' && *fp != '\0');

	head_2 = tail_2 = (NODE*)malloc(sizeof(NODE));

	do {
		newp = (NODE*)malloc(sizeof(NODE));
		newp->c = *fp2;
		tail_2->next = newp;
		tail_2 = newp;
		fp2++;
	} while (*fp2 != '\n' && *fp2 != '\0');
	head = head_1;
	for (i = 0; i < n - 1; i++) {
		head_1 = head_1->next;
	}
	p = head_1->next;
	head_1->next = head_2->next;
	tail_2->next = p;
	tail_1->next = NULL;
	return head;
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
	char data2[20] = { 0 };
	int n;
	char* fp = data;
	char* fp2 = data2;
	fgets(data, 20, stdin);
	fgets(data2, 20, stdin);
	scanf("%d", &n);
	NODE* head = create(fp, fp2, n);

	print(head);
	return 0;
}