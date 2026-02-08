struct node *create(struct node *root, int data)
{     

	if (root == NULL)
	{
		root = (struct node *)malloc(sizeof(struct node));
		root->data = data;
		root->left = NULL;
		root->right = NULL;
		return root;
	}
	else if (data < root->data)
	{
		root->left = create(root->left, data);
	}
	else if (data > root->data)
	{
		root->right = create(root->right, data);
	}
	else
	{
		printf("duplicate value is not allowed!");
	}

	return root;
}

struct node *reSearch(struct node *root, int key)
{
	struct node *temp = root;

	if (temp == NULL || temp->data == key)
	{
		return temp;
	}
	else if (key < temp->data)
	{
		reSearch(temp->left, key);
	}
	else
	{
		reSearch(temp->right, key);
	}
}

void postOrder(struct node *root)
{
	if (root)
	{
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ", root->data);
	}
}
void preOrder(struct node *root)
{
	if (root)
	{
		printf("%d", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
void inOrder(struct node *root)
{
	if (root)
	{
		inOrder(root->left);
		printf("%d ", root->data);
		inOrder(root->right);
	}
}

struct node *insert(struct node *root, int data)
{

	if (root == NULL)
	{
		root = (struct node *)malloc(sizeof(struct node));
		root->data = data;
		root->left = NULL;
		root->right = NULL;
		return root;
	}
	else if (data < root->data)
	{
		root->left = create(root->left, data);
	}
	else if (data > root->data)
	{
		root->right = create(root->right, data);
	}
	else
	{
		printf("duplicate value are not allowed!");
	}

	return root;
}

// set c
struct node *mirror(struct node *root)
{
	struct node *temp = NULL;

	if (root != NULL)
	{
		temp = root->left;
		root->right = mirror(root->right);
		root->left = mirror(temp);
	}
	return root;
}

int evenSum(struct node *root)
{
	static int sum = 0;
	if (root)
	{
		if (root->data % 2 == 0)
		{
			sum += root->data;
		}
		evenSum(root->left);
		evenSum(root->right);
	}

	return sum;
}

int oddSum(struct node *root)
{

	static int sum = 0;
	if (root)
	{
		if (root->data % 2 != 0)
		{
			sum += root->data;
		}
		oddSum(root->left);
		oddSum(root->right);
	}

	return sum;
}

// delete

int min(struct node *root)
{
	static int min_val = 50;
	if (root)
	{
		if (root->data < min_val)
		{
			min_val = root->data;
		}
		min(root->left);
		min(root->right);
	}

	return min_val;
}

int max(struct node *root)
{
	static int max_val = 0;
	if (root)
	{
		if (root->data > max_val)
		{
			max_val = root->data;
		}
		max(root->left);
		max(root->right);
	}

	return max_val;
}
