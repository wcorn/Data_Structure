//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int arr[10];
//int front = -1;
//int raer = -1;
////enqueue queue
//void enqueue(int num) {
//	if (front == -1) {
//		front++;
//	}
//	raer++;
//	arr[raer] = num;
//}
////dequeue queue
//int dequeue() {
//	return arr[front++];
//}
////full check
//int queue_full() {
//	if (raer == 9) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
////empty check
//int queue_empty() {
//	if (front == raer) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
////print check
//void queue_check() {
//	printf("stack : ");
//	for (int i = front; i <= raer; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void main() {
//	int n = 0;
//	int how_enqueue;
//	int how_dequeue;
//	printf("how many enqueue:");
//	scanf("%d", &how_enqueue);
//	printf("how many dequeue:");
//	scanf("%d", &how_dequeue);
//
//	for (int i = 0; i < how_enqueue; i++) {
//		if (queue_full) {
//			printf("Input : ");
//			scanf("%d", &n);
//			enqueue(n);
//			printf("\n");
//			queue_check();
//		}
//		else {
//			printf("queue is full!");
//		}
//	}
//	for (int i = 0; i < how_dequeue; i++) {
//		if (queue_empty()) {
//			printf("dequeue - %d	", dequeue());
//			queue_check();
//		}
//		else {
//			printf("queue is empty!");
//		}
//	}
//}