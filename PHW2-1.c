//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//typedef struct NODE {
//	int data;
//	struct NODE *next;
//}node;
//node* head = NULL;
//node* createNewNode(int data) {
//	node* newnode = (node*)malloc(sizeof(node));
//	newnode->data = data;
//	newnode->next = NULL;
//	return newnode;
//}
//void addNode(node* add) {
//	node* h = head;
//	node* prev = NULL;
//	while (h != NULL)
//	{
//		prev = h;
//		h = h->next;
//	}
//	add->next = h;
//	prev->next = add;
//}
//void binary_change(int num) {
//	int n = 0;
//	n = num % 2;
//		num /= 2;
//	head = createNewNode(n);
//	while (num > 0) {
//		n = num % 2;
//		num /= 2;
//		addNode(createNewNode(n));
//	}
//}
//node* node_reverse() {
//	node* h = head;
//	node* r = NULL;
//	node* q = NULL;
//	while (h!=NULL) {
//		r = q;
//		q = h;
//		h = h->next;
//		q->next = r;
//	}
//}
//void displayList() {
//	node* h = head;
//	while (h != NULL)
//	{
//		if (h->next == NULL) {
//			printf("%d", h->data);
//		}
//		else {
//			printf("%d -- ", h->data);
//		}
//		h = h->next;
//	}
//}
//void main() {
//	int num;
//	scanf("%d", &num);
//	binary_change(num);
//	head = node_reverse();
//	displayList();
//}