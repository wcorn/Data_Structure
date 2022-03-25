#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
#include<stdio.h>
#include<stdlib.h>
struct NODE {
	int data;
	struct NODE* next;
};
struct NODE* head = NULL;
int count = 0;
void run_pushes(int num[],int push_num) {
	if()
}
int full() {
	if (count == MAX) {
		return 1;
	}
	return 0;
}
int empty() {
	if (head == NULL) {
		return 0;
	}
	return 1;
}
void push(int x) {
	struct NODE* temp = malloc(sizeof(struct NODE));
	temp->data = x;
	temp->next = head;
	head = temp;
	count++;
}
int pop() {
	int value;
	struct node* tmp;
	tmp = head;
	value =	head->data;
	head = head->next;
	count--;
	free(tmp);
	return value;
}
int main() {
	int numbers[] = {3,4,5,6,7,8,9,10,11,12,13,14,15};
	print_stack();
	int push_num = rand() % 10;
	int pop_num = rand() % 10;
	printf("Push_num : %d\n", push_num);
	printf("Pop_num : %d\n", pop_num);

	struct NODE* node;
	run_pushes(numbers, push_num);
	run_pops(pop_num);
	return 0;
}