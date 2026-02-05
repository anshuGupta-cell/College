struct node *create(struct node *head, int data)
{

	if (head == NULL)
	{
		head = (struct node *)malloc(sizeof(struct node));
		head->data = data;
		head->left = NULL;
		head->right = NULL;
		return head;
	}
	else if (data < head->data)
	{
		head->left = create(head->left, data);
	}
	else if (data > head->data)
	{
		head->right = create(head->right, data);
	}
	else
	{
		printf("duplicate value are not allowed!");
	}

	return head;
}

struct node *reSearch(struct node *head, int key)
{
	struct node *temp = head;

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

void postOrder(struct node *head)
{
	if (head)
	{
		postOrder(head->left);
		postOrder(head->right);
		printf("%d ", head->data);
	}
}
void preOrder(struct node *head)
{
	if (head)
	{
		printf("%d", head->data);
		preOrder(head->left);
		preOrder(head->right);
	}
}
void inOrder(struct node *head)
{
	if (head)
	{
		inOrder(head->left);
		printf("%d ", head->data);
		inOrder(head->right);
	}
}

struct node *insert(struct node *head, int data)
{

	if (head == NULL)
	{
		head = (struct node *)malloc(sizeof(struct node));
		head->data = data;
		head->left = NULL;
		head->right = NULL;
		return head;
	}
	else if (data < head->data)
	{
		head->left = create(head->left, data);
	}
	else if (data > head->data)
	{
		head->right = create(head->right, data);
	}
	else
	{
		printf("duplicate value are not allowed!");
	}

	return head;
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

int evenSum(struct node *head)
{
	static int sum = 0;
	if (head)
	{
		if (head->data % 2 == 0)
		{
			sum += head->data;
		}
		evenSum(head->left);
		evenSum(head->right);
	}

	return sum;
}

int oddSum(struct node *head)
{

	static int sum = 0;
	if (head)
	{
		if (head->data % 2 != 0)
		{
			sum += head->data;
		}
		oddSum(head->left);
		oddSum(head->right);
	}

	return sum;
}

// delete

int min(struct node *head)
{
	static int min_val = 50;
	if (head)
	{
		if (head->data < min_val)
		{
			min_val = head->data;
		}
		min(head->left);
		min(head->right);
	}

	return min_val;
}


int max(struct node *head)
{
	static int max_val = 0;
	if (head)
	{
		if (head->data > max_val)
		{
			max_val = head->data;
		}
		max(head->left);
		max(head->right);
	}

	return max_val;
}
