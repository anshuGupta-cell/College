#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int getHeight(struct Node *node){
    if(!node){
        return 0;
    }
    return node->height;
}

int max(int a, int b){
    return a>b?a:b;
}

struct Node *createNode(int data){
    
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->key = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;

    return newNode;

}

int getBalanceFactor(struct Node *n){
    if(n==NULL){
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

struct Node *rightRotate (struct Node *y){
    struct Node *x = y->left;
    struct Node *t2 = x->right;
    
    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;
}

struct Node *leftRotate (struct Node *x){
    struct Node *y = x->right;
    struct Node *t2 = y->left;
    
    y->left = x;
    x->right = t2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return y;
}

struct Node *insert (struct Node *n, int data){
    
    if(!n) {
       return( createNode(data));
       printf("Hello World!");
       
    }

    if(data < n->key)
        n->left = insert(n->left, data);
    else if(data > n->key)
        n->right = insert(n->right, data);
        return n;

    n->height = 1 + max(getHeight(n->right), getHeight(n->left));

    int bf = getBalanceFactor(n);

    if(bf > 1 && data < n->left->key){
        return rightRotate(n);
    }
    if(bf < -1 && data > n->right->key){
        return leftRotate(n);
    }
    if(bf > 1 && data  > n->left->key){
        leftRotate(n->left);
        return rightRotate(n);
    }
    if(bf < -1 && data  < n->right->key){
        rightRotate(n->right);
        return rightRotate(n);
    }
   return n;
}

void preOrder(struct Node *root)
{
	if (root)
	{
		printf("%d", root->key);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void main () {

    struct Node *root = NULL;
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 1);
    preOrder(root);

}