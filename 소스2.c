//int main()
//{
//	node* root = NULL;
//	do
//	{
//		printf("\n1)Create:");
//		printf("\n2)Insert:");
//		printf("\n3)Delete:");
//		printf("\n4)Print:");
//		printf("\n5)Quit:");
//		printf("\n\nEnter Your Choice:");
//		scanf("%d", &op);		op = 2
//			switch (op)
//			{
//			case 2: printf("\nEnter a data:");
//				scanf("%d", &x);
//				root = insert(root, x);			x = fish
//
//
//					node * insert(node * T,  x)
//				{
//					if (T == NULL)
//					{
//						T = (node*)malloc(sizeof(node));	T = 100
//							T->data = x;						x = fish
//							T->left = NULL;
//						T->right = NULL;
//					}
//
//					T->ht = height(T);
//					int height(node * T)
//					{
//						int lh, rh;
//						if (T == NULL)			T == 100
//							return(0);
//						if (T->left == NULL)
//							lh = 0;
//						if (T->right == NULL)
//							rh = 0;
//						if (lh > rh)			lh = 0, rh = 0,
//							return(lh);			T->ht = 0
//					}
//				}
//				return(T);				root = T
//
//					break;
//			}
//		printf("\n1)Create:");
//		printf("\n2)Insert:");
//		printf("\n3)Delete:");
//		printf("\n4)Print:");
//		printf("\n5)Quit:");
//		printf("\n\nEnter Your Choice:");
//		scanf("%d", &op);			op = 2
//		switch (op)
//		{
//		case 2: printf("\nEnter a data:");
//			scanf("%d", &x); =		x = dog
//			root = insert(root, x);x = dog
//
//
//				node * insert(node * T,  x)	T = 100	x = dog
//			{
//				if (T == NULL)	T = 100, so false
//				{
//				}
//				else
//					if (x > T->data) x = dog, T->data = fish, so false
//					{
//					}
//					else
//						if (x < T->data)	true
//						{
//							T->left = insert(T->left, x); x = dog
//
//
//							node* insert(node * T, x) T = root->left x = dog
//							{
//								if (T == NULL)	
//								{
//									T = (node*)malloc(sizeof(node));	T = 120
//									T->data = x;						T->data = dog
//									T->left = NULL;
//									T->right = NULL;
//								}
//								T->ht = height(T);						
//
//								int height(node * T)
//								{
//									if (T->left == NULL)
//										lh = 0;
//									if (T->right == NULL)
//										rh = 0;
//									if (lh > rh)		lh = 0, rh = 0, so false
//										return(lh);	
//									return(rh);			rh = 0 = T->hr = root->left->ht
//								}
//								return(T); root->left = T
//							}
//							if (BF(T) == 2)
//							
//								int BF(node * T)	T = root->left
//							{
//								int lh, rh;
//								if (T == NULL)
//									return(0);	BF(T) = 0, so false
//							}
//						}
//				T->ht = height(T);T = root;
//
//
//				int height(node * T) T = root = 100
//				{
//					int lh, rh;
//					if (T->left == NULL)		T->left = 120;
//						lh = 0;
//					else
//						lh = 1 + T->left->ht;	lh = 1
//					if (T->right == NULL)
//						rh = 0;
//					if (lh > rh)
//						return(lh);			T->ht = 1 = root->ht 
//				}
//				return(T);	root = T
//			}
//			break;
//		}
//		printf("\n1)Create:");
//		printf("\n2)Insert:");
//		printf("\n3)Delete:");
//		printf("\n4)Print:");
//		printf("\n5)Quit:");
//		printf("\n\nEnter Your Choice:");
//		scanf("%d", &op);	op = 2
//		switch (op)
//		{
//		case 2: printf("\nEnter a data:");
//			scanf("%d", &x);				x = cat
//			root = insert(root, x);
//
//			node* insert(node* T, int x)	T=100, x = cat
//			{
//				if (T == NULL)			T ==100
//				{
//				}
//				else
//					if (x > T->data) x = cat, T->data = fish, so false
//					{
//					}
//					else
//						if (x < T->data)		x = cat, T->data = fish, so true
//						{
//							T->left = insert(T->left, x);	
//
//
//							node* insert(node * T, int x)	T = T->left = root->left
//							{
//								if (T == NULL)		T = 120
//								{
//								}
//								else
//									if (x > T->data) x = cat, T->data = dog, so false
//									{
//									}
//									else
//										if (x < T->data)	x = cat, T->data = dog, so true
//										{
//											T->left = insert(T->left, x);
//
//											node* insert(node * T, int x) T = T->left = root->left->left
//											{
//												if (T == NULL)
//												{
//													T = (node*)malloc(sizeof(node));	T = 130	
//													T->data = x;						x = cat
//													T->left = NULL;
//													T->right = NULL;
//												}
//												T->ht = height(T);
//
//
//												int height(node * T)
//												{
//													if (T->left == NULL)
//														lh = 0;
//													if (T->right == NULL)
//														rh = 0;
//													if (lh > rh) lh = 0. rh = 0, so false
//														return(lh);
//													return(rh);			T->heght = 0
//												}
//												return(T);	root->left->left = T
//											}
//
//											if (BF(T) == 2) T = root->left
//
//												int BF(node * T)
//											{
//												int lh, rh;
//												if (T->left == NULL)	T->left = 130
//													lh = 0;
//												else
//													lh = 1 + T->left->ht;		lh = 1
//												if (T->right == NULL)
//													rh = 0;
//												return(lh - rh); BF(T) = 1, so false
//											}
//										}
//								T->ht = height(T);
//
//								int height(node * T) T = root->left
//								{
//									int lh, rh;
//									if (T->left == NULL)		T->left = 130
//										lh = 0;
//									else
//										lh = 1 + T->left->ht;	lh = 1
//									if (T->right == NULL)
//										rh = 0;					rh = 0
//									if (lh > rh)	1>0 so true
//										return(lh);	T->ht = root->left->ht = 1
//								}
//								return(T);		root->left = T
//							}
//							if (BF(T) == 2)
//
//
//								int BF(node * T)
//							{
//								if (T->left == NULL)
//									lh = 0;
//								else
//									lh = 1 + T->left->ht;	lh = 2
//
//								if (T->right == NULL)
//									rh = 0;			rh = 0
//
//								return(lh - rh);		2 so if(BF(T) == 2) is true
//							}
//								if (x < T->left->data)	x = cat, T->left->data = dog,so true
//									T = LL(T);
//								node* LL(node* T) T = root
//								{
//									T = rotateright(T); 
//
//									node* rotateright(node * x) x = root
//									{
//										node* y;
//										y = x->left;		y = 120
//										x->left = y->right;	x->left = NULL
//										y->right = x;	y->right = 100
//										x->ht = height(x);
//										int height(node* T) T = x
//										{
//											if (T->left == NULL) true
//												lh = 0;
//											if (T->right == NULL) true
//												rh = 0;
//											if (lh > rh)	lh = 0, rh = 0, so false
//												return(lh);
//											return(rh);	x->ht = 0
//										}
//
//										y->ht = height(y);
//										int height(node* T) T = y
//										{
//											if (T->left == NULL) y->left = 130, so false
//												lh = 0;
//											else
//												lh = 1 + T->left->ht; lh = 1
//											if (T->right == NULL) y->right = 100, so false
//												rh = 0;
//											else
//												rh = 1 + T->right->ht; rh =1
//											if (lh > rh)	lh = 1,rh = 1 so  flase
//												return(lh);
//											return(rh);y->ht = 1
//										}
//										return(y);T = y = 120
//									}
//									return(T); T = 120
//								}
//						}
//				T->ht = height(T);
//
//				int height(node* T) T = 120
//				{
//					if (T->left == NULL)	T->left = 130
//						lh = 0;
//					else
//						lh = 1 + T->left->ht;	lh = 1
//					if (T->right == NULL)	T->right = 100
//						rh = 0;
//					else
//						rh = 1 + T->right->ht; rh = 1
//					if (lh > rh)	lh = rh, so false
//						return(lh);
//					return(rh);	T->ht = 1
//				}
//				
//				return(T);root = 120
//			}
//			break;
//		
//		}
//		printf("\n1)Create:");
//		printf("\n2)Insert:");
//		printf("\n3)Delete:");
//		printf("\n4)Print:");
//		printf("\n5)Quit:");
//		printf("\n\nEnter Your Choice:");
//		scanf("%d", &op);	op = 2
//		switch (op)
//		{
//		case 2: printf("\nEnter a data:");
//			scanf("%d", &x);		x = mouse
//			root = insert(root, x); x = mouse
//
//				node* insert(node* T, int x)	T = root, x = mouse
//			{
//				if (T == NULL)	T = 120
//				{
//				}
//				else
//					if (x > T->data)	x = mouse T->data = dog, so true
//					{
//						T->right = insert(T->right, x);
//
//						node* insert(node* T, int x)	T = root->right = 100
//						{
//							if (T == NULL)	T = 100, so false
//							{
//							}
//							else
//								if (x > T->data) x = mouse, T->data = fish, so true
//								{
//									T->right = insert(T->right, x);
//
//									node* insert(node* T, int x) T = root->right->right, x = mouse
//									{
//										if (T == NULL)	true
//										{
//											T = (node*)malloc(sizeof(node));	T = 140
//											T->data = x;						T->data = mouse
//											T->left = NULL;	
//											T->right = NULL;
//										}
//										T->ht = height(T);
//
//
//										int height(node* T)
//										{
//											if (T->left == NULL) true
//												lh = 0;
//											if (T->right == NULL) true
//												rh = 0;
//											if (lh > rh)lh = , rh = 0, so false
//												return(lh);
//											return(rh); T->ht = 0
//										}
//										return(T); T->right = 140
//									}
//									if (BF(T) == -2)
//
//										int BF(node* T) T = 140
//									{
//
//										if (T->left == NULL) lh = 0
//											lh = 0;
//										if (T->right == NULL)	T->right = 140
//											rh = 0;
//										else
//											rh = 1 + T->right->ht;	rh = 1
//
//										return(lh - rh); BF(T) = 1
//									}
//								}
//							T->ht = height(T); 
//							
//							int height(node* T)	T = 100
//							{
//								if (T->left == NULL) true 
//									lh = 0;
//								if (T->right == NULL) T->right = 140
//									rh = 0;
//								else
//									rh = 1 + T->right->ht;	rh = 1
//								if (lh > rh)	0>1 ,is false
//									return(lh);
//								return(rh);	T->ht = 1 100->ht = 1
//							}
//							return(T);	T->right = 100
//						}
//						if (BF(T) == -2)
//
//							int BF(node* T) T = 120
//						{
//							if (T->left == NULL) T->left = 130
//								lh = 0;
//							else
//								lh = 1 + T->left->ht;	lh = 1
//
//							if (T->right == NULL)	T->right = 100
//								rh = 0;
//							else
//								rh = 1 + T->right->ht;	rh = 2
//
//							return(lh - rh);	-1 (BF(T)=-1), so false
//						}
//					}
//					
//				T->ht = height(T);
//
//				int height(node * T)	T ==120
//				{
//					if (T->left == NULL) T->left = 130
//						lh = 0;
//					else
//						lh = 1 + T->left->ht;	lh = 1
//					if (T->right == NULL)	T->right = 100
//						rh = 0;
//					else
//						rh = 1 + T->right->ht;	rh = 2
//					if (lh > rh)	1>2, so false
//						return(lh);
//					return(rh);	T->ht = 2, 120->ht = 2
//				}
//
//				return(T);root = 120
//			}
//			break;
//		}
//		printf("\n1)Create:");
//		printf("\n2)Insert:");
//		printf("\n3)Delete:");
//		printf("\n4)Print:");
//		printf("\n5)Quit:");
//		printf("\n\nEnter Your Choice:");
//		scanf("%d", &op);	op = 2
//		switch (op)
//		{
//		case 2: printf("\nEnter a data:");
//			scanf("%d", &x);		x = lion
//			root = insert(root, x);
//
//			node* insert(node* T, int x)	T = 120, x = lion
//			{
//				if (T == NULL)	false
//				{
//				}
//				else
//					if (x > T->data) x = lion, T->data = dog, so true
//					{
//						T->right = insert(T->right, x); T->right = 100
//
//						node* insert(node* T, int x)T = 100, x = lion
//						{
//							if (T == NULL) false
//							{
//							}
//							else
//								if (x > T->data) x = lion, T->data = fish, so true
//								{
//									T->right = insert(T->right, x); T->right = 140
//										
//
//									node* insert(node* T, int x)T = 140, mouse
//									{
//										if (T == NULL) false
//										{
//										}
//										else
//											if (x > T->data) x = lion, T->data = mouse, so false
//											{
//											}
//											else
//												if (x < T->data) x = lion, T->data = mouse, so true
//												{
//													T->left = insert(T->left, x);T->left = NULL
//
//
//														node * insert(node * T, int x) T = NULL
//													{
//														if (T == NULL) true
//														{
//															T = (node*)malloc(sizeof(node));	T = 150
//															T->data = x;						T->data = lion
//															T->left = NULL;
//															T->right = NULL;
//														}
//														T->ht = height(T);
//
//														int height(node* T) T = 150
//														{
//															if (T->left == NULL)true
//																lh = 0;
//															if (T->right == NULL)true
//																rh = 0;
//															if (lh > rh)	false
//																return(lh);
//															return(rh);	T->ht = 0
//														}
//														return(T);T->left = 150, 
//													}
//													if (BF(T) == 2)
//
//														int BF(node* T) T = 140
//													{
//														if (T->left == NULL) T->left = 150, so false
//															lh = 0;
//														else
//															lh = 1 + T->left->ht;	lh = 1
//
//														if (T->right == NULL) true
//															rh = 0;
//														return(lh - rh); BF(T) = 1 so false
//													}
//												}
//										T->ht = height(T);
//
//										int height(node* T) T = 140
//										{
//											int lh, rh;
//											if (T == NULL)
//												return(0);
//											if (T->left == NULL) T->left = 150,so false
//												lh = 0;
//											else
//												lh = 1 + T->left->ht; lh = 1
//											if (T->right == NULL) true
//												rh = 0;
//											if (lh > rh) true
//												return(lh);T->ht = 1, 140->ht = 1
//										}
//										return(T); T->right = 140
//									}
//									if (BF(T) == -2)
//
//										int BF(node * T) T = 100
//									{
//										if (T->left == NULL) true
//											lh = 0;
//										if (T->right == NULL) T->right = 140
//											rh = 0;
//										else
//											rh = 1 + T->right->ht; rh = 2
//
//										return(lh - rh); BF(T) == -2, so true
//									}
//										if (x > T->right->data)	lion < mouse, so false
//										else
//											T = RL(T);
//										node* RL(node * T)
//										{
//											T->right = rotateright(T->right); T->right = 140
//
//											node* rotateright(node * x) x = 140
//											{
//												node* y;
//												y = x->left; y = 150
//												x->left = y->right; 140->left = NULL
//												y->right = x;	150->right = 140
//												x->ht = height(x); x = 140
//
//												int height(node * T) T = 140
//												{
//													if (T->left == NULL) true
//														lh = 0;
//													if (T->right == NULL)	true
//														rh = 0;
//													if (lh > rh)false
//													return(rh);		x->ht = 0
//												}
//												y->ht = height(y);
//
//												int height(node * T) T = 150
//												{
//													if (T->left == NULL) true
//														lh = 0;
//													if (T->right == NULL)T->right = 140
//													else
//														rh = 1 + T->right->ht; rh = 1
//													if (lh > rh)	false
//													return(rh); y->ht = 1
//												}
//
//												return(y); T->right = 150
//											} 
//											T = rotateleft(T);
//
//											node* rotateleft(node * x) x = 100
//											{
//												node* y;
//												y = x->right;	y = 150
//												x->right = y->left; x->right = NULL
//												y->left = x;		y->left = 100
//												x->ht = height(x);
//
//												int height(node * T) T = 100
//												{
//													if (T->left == NULL) true
//														lh = 0;
//													if (T->right == NULL) true
//														rh = 0;
//													if (lh > rh)false
//													return(rh); T->ht = 0
//												}
//												y->ht = height(y);
//												int height(node * T)
//												{
//													if (T->left == NULL) T->left = 100, so false
//														lh = 0;
//													else
//														lh = 1 + T->left->ht; lh = 1
//													if (T->right == NULL) T->right = 140, so false
//														rh = 0;
//													else
//														rh = 1 + T->right->ht; rh = 1
//													if (lh > rh) false
//														return(lh);
//													return(rh);1
//												}
//												return(y);T = 150
//											}
//
//											return(T);T = 150
//										}
//
//								}
//							T->ht = height(T);
//
//							int height(node* T) T = 150
//							{
//								if (T->left == NULL) T->left = 100
//									lh = 0;
//								else
//									lh = 1 + T->left->ht; lh = 1
//								if (T->right == NULL) T->right = 140
//									rh = 0;
//								else
//									rh = 1 + T->right->ht; rh = 1
//								if (lh > rh)false
//									return(lh);
//								return(rh); T->ht = 1
//							}
//							return(T);T->right = 150
//						}
//						if (BF(T) == -2)
//
//							int BF(node* T) T = 120
//						{
//							if (T->left == NULL) T->left = 130
//								lh = 0;
//							else
//								lh = 1 + T->left->ht;	lh = 1
//
//							if (T->right == NULL)	T->right = 150
//								rh = 0;
//							else
//								rh = 1 + T->right->ht; rh = 2
//
//							return(lh - rh); BF(T) == -1, so false
//						}
//					}
//				T->ht = height(T);
//
//				int height(node* T) T = 120
//				{
//					if (T->left == NULL) T->left = 130
//						lh = 0;
//					else
//						lh = 1 + T->left->ht; lh = 1
//					if (T->right == NULL) T->right = 150
//						rh = 0;
//					else
//						rh = 1 + T->right->ht; rh = 2
//					if (lh > rh) true
//						return(lh); T->ht = 2
//					return(rh);
//				}
//				return(T); root = 120
//			}
//			break;
//		}
//	}
//}