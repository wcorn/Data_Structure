//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//typedef struct NODE {
//	int tree_level;
//	int key;
//	int child_key;
//	int degree;
//	struct NODE* left;
//	struct NODE* child;
//	struct NODE* right;
//}node;
//node* root = NULL;
//// createNode
//node* createNode(int tree_level, int key, int child_key) {
//	node* newnode = (node*)malloc(sizeof(node));
//	newnode->tree_level = tree_level;
//	newnode->key = key;
//	newnode->child_key = child_key;
//	newnode->degree = 0;
//	newnode->left = NULL;
//	newnode->child = NULL;
//	newnode->right = NULL;
//	return newnode;
//}
////addNode
//void addNode(node* newnode) {
//	node* h = root;
//	node* prev = NULL;
//	node* tmp = NULL;
//	int count = 0;
//	for (int i = 2; i < newnode->tree_level; i++) {
//		prev = h;
//		//Find a node that matches the key of the node and child_key of parent
//		for (int j = 0; j < h->degree; j++) {
//			if ((h->child[j].child_key == newnode->key)) {
//				h = &h->child[j];
//				count++;
//				break;
//			}
//		}
//		//Find parent node that has 'child_key
//		if (count == 0) {
//			for (int j = 0; j < h->degree; j++) {
//				if ((h->child[j].child_key != NULL)) {
//					h = &h->child[j];
//					break;
//				}
//			}
//		}
//	}
//	h->child = (node*)realloc(h->child, sizeof(node) * (h->degree + 1));
//	h->child[h->degree] = *newnode;
//	h->degree++;
//}
//void printPreorder(node* h)
//{
//	{
//		if (h != NULL) {
//			printf("%d\n", h->key);
//			printPreorder(h->left);
//			printPreorder(h->right);
//		}
//	}
//
//}
//void convert_binarytree(node* p) {
//	node* prev = NULL;
//	node* h = p;
//	if (h == NULL) return;
//	//step 1
//	for (int i = 0; i < 3; i++) {
//		prev = h;
//		for (int j = 0; j < prev->degree; j++) {
//			if (prev->child_key == prev->child[j].key) {
//				prev->left = &prev->child[j];
//			}
//			if ((prev->child[j].child_key != NULL) && ((prev->child[j].degree > 1) || i == 1)) {
//				h = &h->child[j];
//			}
//		}
//	}
//	//step 2
//	h = p;
//	for (int i = 0; i < 4; i++) {
//		prev = h;
//		for (int j = 0; j < prev->degree; j++) {
//			if ((prev->child[j].child_key != NULL) && ((prev->child[j].degree > 1))) {
//				h = &h->child[j];
//			}
//			if (j < prev->degree - 1) {
//				prev->child[j].right = &prev->child[j + 1];
//			}
//		}
//	}
//	for (int i = 0; i < p->degree; i++) {
//		convert_binarytree(&p->child[i]);
//	}
//}
//void main() {
//	int n[10][3] = { {1, 100 ,200}, {2, 200 ,NULL}, {2, 75, 25},{2, 300, NULL}, {2, 95, 150}, {3, 25, NULL}, {3, 50, NULL}, {3, 30, 120}, {3, 150, NULL}, {4, 120, NULL} };
//	for (int i = 0; i < 10; i++) {
//		if (n[0][i] == 1) {
//			root = createNode(n[i][0], n[i][1], n[i][2]);
//		}
//		else {
//			addNode(createNode(n[i][0], n[i][1], n[i][2]));
//		}
//	}
//	convert_binarytree(root);
//	printPreorder(root);
//}