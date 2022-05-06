//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//typedef struct NODE {
//	int tree_level;
//	int key;
//	int child_key;
//	int degree;
//	struct NODE* left;
//	struct NODE* right;
//}node;
//node* root = NULL;
//node* createNode(int tree_level, int key, int child_key) {
//	node* newnode = (node*)malloc(sizeof(node));
//	newnode->tree_level = tree_level;
//	newnode->key = key;
//	newnode->child_key = child_key;
//	newnode->degree = 0;
//	newnode->left = NULL;
//	newnode->right = NULL;
//	return newnode;
//}
//void addNode(node* newnode) {
//	node* h = root;
//	node* tmp = NULL;
//	for (int i = 2; i < newnode->tree_level; i++) {
//		for (int j = 0; j < h->degree; j++) {
//			if (h->left[j].child_key != NULL) {
//				h = &h->left[j];
//				break;
//			}
//		}
//	}
//	h->left = (node*)realloc(h->left, sizeof(node) * (h->degree + 1));
//	h->left[h->degree] = *newnode;
//	h->degree++;
//}
//void printPreorder(node* h)
//{
//	{
//		if (h) {
//			printf("%d\n", h->key);
//			printPreorder(h->left);
//			printPreorder(h->right);
//		}
//	}
//
//}
//void convert_binaryorder() {
//	node* h = root;
//	node* prev = NULL;
//	node* prev2 = NULL;
//	for (int i = 0; i < 4; i++) {
//		prev = h;
//		for (int j = 0; j < prev->degree; j++) {
//			if (prev->child_key == prev->left[j].key) {
//				prev = h;
//				prev2 = h;
//				h->left = &h->left[j];
//				h = h->left;
//			}
//			else if ((h->child_key != NULL) && prev->left[j].child_key == NULL) {
//				prev2->right = &prev->left[j];
//				prev2 = prev2->right;
//			}
//			else if (prev->child_key != prev->left[j].key) {
//				h->right = &prev->left[j];
//				h = h->right;
//			}
//		}
//
//	}
//}
//
//void main() {
//	int n[10][3] = { {1, 100 ,200}, {2, 200 ,NULL}, {2, 75, 25},{2, 300, NULL}, {3, 25, NULL}, {3, 50, NULL}, {3, 30, 120}, {3, 150, NULL}, {4, 120, NULL}, {4, 55, NULL} };
//	for (int i = 0; i < 10; i++) {
//		if (n[0][i] == 1) {
//			root = createNode(n[i][0], n[i][1], n[i][2]);
//		}
//		else {
//			addNode(createNode(n[i][0], n[i][1], n[i][2]));
//		}
//	}
//	convert_binaryorder();
//	printPreorder(root);
//}