//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int arr[10];
//int top = -1;
////push stack
//void push(int num) {
//	top++;
//	arr[top] = num;
//}
////pop stack
//int pop() {
//	return arr[top--];
//}
////full check
//int stack_full() {
//	if (top == 9) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
////empty check
//int stack_empty() {
//	if (top == -1) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
////print check
//void stack_check() {
//	printf("stack : ");
//	for (int i = 0; i <=top; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void main() {
//	int n = 0;
//	int how_push;
//	int how_pop;
//	printf("how many push:");
//	scanf("%d",&how_push);
//	printf("how many pop:");
//	scanf("%d", &how_pop);
//	for (int i = 0; i < how_push; i++) {
//		if (stack_full) {
//			printf("Input : ");
//			scanf("%d", &n);
//			push(n);
//			printf("\n");
//			stack_check();
//		}
//		else {
//			printf("stack is full!");
//		}
//	}
//	for (int i = 0; i < how_pop; i++) {
//		if (stack_empty()) {
//			printf("pop - %d	", pop());
//			stack_check();
//		}
//		else {
//			printf("stack is empty!");
//		}
//	}
//}