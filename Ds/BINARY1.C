#include <stdio.h>
#include <stdlib.h>
#include <process.h>
struct node
{
	int data;
	struct node *left, *right;
} * root;

struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}
struct node *minValueNode(struct node *node)
{
	struct node *current = node;
	while (current->left != NULL)
		current = current->left;
	return current;
}
struct node *delete_node(struct node *root, int data)
{
	struct node *temp = minValueNode(root->right);
	if (root == NULL)
		return root;

	if (data < root->data)
		root->left = delete_node(root->left, data);

	else if (data > root->data)
		root->right = delete_node(root->right, data);
	else
	{

		if (root->left == NULL)
		{
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			struct node *temp = root->left;
			free(root);
			return temp;
		}
		root->data = temp->data;
		root->right = delete_node(root->right, temp->data);
	}
	return root;
}

void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}
struct node *searchBst(int item)
{
	struct node *temp;
	temp = root;

	if (temp == NULL)
		return NULL;

	while (temp->data != item)
		if (temp->data > item)
			temp = temp->left;
		else
			temp = temp->right;
	if (temp == NULL)
		return NULL;

	return temp;
}

struct node *insert(struct node *node, int data)
{
	if (node == NULL)
		return newNode(data);
	if (data < node->data)
		node->left = insert(node->left, data);
	else if (data > node->data)
		node->right = insert(node->right, data);
	return node;
}

int main()
{
	int i, data, n, item, del_ele, ch;
	struct node *result;
	root = NULL;
	clrscr();
	do
	{
		printf("1.INSERTNODE 2.SEARCH 3.DELETENODE 4.INORDER TRAVERSAL 5.EXIT");
		printf("\nEnter your choice:");
		scanf("%d", &ch);
		switch (ch)
		{
			case 1:
				printf("Enter the number of nodes : ");
				scanf("%d", &n);
				printf("Input the nodes of the binary search tree : ");
				for (i = 0; i < n; i++)
				{
					scanf("%d", &data);
					if (i == 0 && root == NULL)
						root = insert(root, data);
					else
						insert(root, data);
				}
				break;
			case 2:
				printf("Enter the element to be searched: ");
				scanf("%d", &item);
				if (searchBst(item) == NULL)
					printf("Item Not found");
				else
					printf("item present");
				break;
			case 3:
				printf("Enter the node to be deleted: ");
				scanf("%d", &del_ele);
				delete_node(root, del_ele);
				break;
			case 4:
				printf("Inorder traversal: \n");
				inorder(root);
				printf("\n");
		}
	} while (ch < 5);
	printf("Stopped");
	getch();
	return 0;
}