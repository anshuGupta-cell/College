// implement a BST library btree.h with operations - create, search, insert, preorder, postorder, inOrder
//  write menu driven program

#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *left, *right;
	int data;
};

#include "./btree.h"

void main()
{
	struct node *root = NULL;
	int ch;

	printf("*** Binary Search Tree ***");
	
	do {
		printf("\nEnter your choice:");
		printf("\n1. Create");
		printf("\n2. Search");
		printf("\n3. Insert");
		printf("\n4. Inorder");
		printf("\n5. Preorder");
		printf("\n6. Postorder");
		printf("\n7. Exit\n");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				int n = 0, item = 0;
				root = NULL;
				printf("Enter number of nodes: \n");
				scanf ("%d", &n);
				for(int i = 0; i < n; i++) {
					printf("Enter data for node %d: ", i);
					scanf("%d", &item);
					root = create(root, item);
				}
				break;

			case 2:
				int key = 0;
				printf("Enter key to be searched: ");
				scanf("%d", &key);
				struct node *resultNode = reSearch(root, key);
				if(!resultNode)
					printf("Key not found");
				else
					printf("key is: %d", resultNode->data);
				
				break;
			case 3:
				int data;
				printf("Enter data to insert: ");
				scanf("%d", &data);
				root = insert(root, data);
				break;
			case 4:
				inOrder(root);
				break;
			case 5:
				preOrder(root);
				break;
			case 6:
				postOrder(root);
				break;
			default:
				printf("Invalid choice !!");
				break;
		}
		
	}while(ch != 7);

	root = create(root, 3);
	root = create(root, 4);
	root = create(root, 2);
	root = create(root, 1);
	root = create(root, 30);

	// inOrder(root);

	// struct node *result = reSearch(root, 39);
	// if (result != NULL)
	// {
	// 	printf("\nval is %d", result->data);
	// }
	// else
	// {
	// 	printf("\nKey not found");
	// }

	root = insert(root, 34);

	inOrder(root);

	struct node * root3 = mirror(root);
	printf("\n");
	int sum = evenSum(root);
	printf("\neven sum = %d", sum);
	
	printf("\nodd sum = %d", oddSum(root));

	printf("\nmin = %d", min(root));
	
	printf("\nmax = %d", max(root));
}
