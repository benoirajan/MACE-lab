#include <stdio.h>
#include <stdlib.h>

int RED = 100, BLACK = 300;

struct Node
{
  int data, color;
  struct Node *child[2];
};

struct Node *root = NULL;

// Create a red-black tree
struct Node *createNode(int data)
{
  struct Node *newnode;
  newnode = (struct Node *)malloc(sizeof(struct Node));
  newnode->data = data;
  newnode->color = RED;
  newnode->child[0] = newnode->child[1] = NULL;
  return newnode;
}

// Insert an node
void insertion(int data)
{
  struct Node *stack[98], *ptr, *xPtr, *yPtr;
  int dir[98], ht = 0, index;
  ptr = root;
  if (!root)
  {
    root = createNode(data);
    return;
  }

  stack[ht] = root;
  dir[ht++] = 0;
  while (ptr != NULL)
  {
    if (ptr->data == data)
    {
      printf("Duplicates Not Allowed!!\n");
      return;
    }
    index = (data > ptr->data) ? 1 : 0;
    stack[ht] = ptr;
    ptr = ptr->child[index];
    dir[ht++] = index;
  }
  stack[ht - 1]->child[index] = createNode(data);
  while ((ht >= 3) && (stack[ht - 1]->color == RED))
  {
    if (dir[ht - 2] == 0)
    {
      yPtr = stack[ht - 2]->child[1];
      if (yPtr != NULL && yPtr->color == RED)
      {
        stack[ht - 2]->color = RED;
        stack[ht - 1]->color = yPtr->color = BLACK;
        ht = ht - 2;
      }
      else
      {
        if (dir[ht - 1] == 0)
        {
          yPtr = stack[ht - 1];
        }
        else
        {
          xPtr = stack[ht - 1];
          yPtr = xPtr->child[1];
          xPtr->child[1] = yPtr->child[0];
          yPtr->child[0] = xPtr;
          stack[ht - 2]->child[0] = yPtr;
        }
        xPtr = stack[ht - 2];
        xPtr->color = RED;
        yPtr->color = BLACK;
        xPtr->child[0] = yPtr->child[1];
        yPtr->child[1] = xPtr;
        if (xPtr == root)
        {
          root = yPtr;
        }
        else
        {
          stack[ht - 3]->child[dir[ht - 3]] = yPtr;
        }
        break;
      }
    }
    else
    {
      yPtr = stack[ht - 2]->child[0];
      if ((yPtr != NULL) && (yPtr->color == RED))
      {
        stack[ht - 2]->color = RED;
        stack[ht - 1]->color = yPtr->color = BLACK;
        ht = ht - 2;
      }
      else
      {
        if (dir[ht - 1] == 1)
        {
          yPtr = stack[ht - 1];
        }
        else
        {
          xPtr = stack[ht - 1];
          yPtr = xPtr->child[0];
          xPtr->child[0] = yPtr->child[1];
          yPtr->child[1] = xPtr;
          stack[ht - 2]->child[1] = yPtr;
        }
        xPtr = stack[ht - 2];
        yPtr->color = BLACK;
        xPtr->color = RED;
        xPtr->child[1] = yPtr->child[0];
        yPtr->child[0] = xPtr;
        if (xPtr == root)
        {
          root = yPtr;
        }
        else
        {
          stack[ht - 3]->child[dir[ht - 3]] = yPtr;
        }
        break;
      }
    }
  }
  root->color = BLACK;
}

// Delete a node
void delete (int data)
{
  struct Node *stack[98], *ptr, *xPtr, *yPtr;
  struct Node *pPtr, *qPtr, *rPtr;
  int dir[98], ht = 0, diff, i;
  int color;

  if (!root)
  {
    printf("Tree not available\n");
    return;
  }

  ptr = root;
  while (ptr != NULL)
  {
    if ((data - ptr->data) == 0)
      break;
    diff = (data - ptr->data) > 0 ? 1 : 0;
    stack[ht] = ptr;
    dir[ht++] = diff;
    ptr = ptr->child[diff];
  }

  if (ptr->child[1] == NULL)
  {
    if ((ptr == root) && (ptr->child[0] == NULL))
    {
      free(ptr);
      root = NULL;
    }
    else if (ptr == root)
    {
      root = ptr->child[0];
      free(ptr);
    }
    else
    {
      stack[ht - 1]->child[dir[ht - 1]] = ptr->child[0];
    }
  }
  else
  {
    xPtr = ptr->child[1];
    if (xPtr->child[0] == NULL)
    {
      xPtr->child[0] = ptr->child[0];
      color = xPtr->color;
      xPtr->color = ptr->color;
      ptr->color = color;

      if (ptr == root)
      {
        root = xPtr;
      }
      else
      {
        stack[ht - 1]->child[dir[ht - 1]] = xPtr;
      }

      dir[ht] = 1;
      stack[ht++] = xPtr;
    }
    else
    {
      i = ht++;
      while (1)
      {
        dir[ht] = 0;
        stack[ht++] = xPtr;
        yPtr = xPtr->child[0];
        if (!yPtr->child[0])
          break;
        xPtr = yPtr;
      }

      dir[i] = 1;
      stack[i] = yPtr;
      if (i > 0)
        stack[i - 1]->child[dir[i - 1]] = yPtr;

      yPtr->child[0] = ptr->child[0];

      xPtr->child[0] = yPtr->child[1];
      yPtr->child[1] = ptr->child[1];

      if (ptr == root)
      {
        root = yPtr;
      }

      color = yPtr->color;
      yPtr->color = ptr->color;
      ptr->color = color;
    }
  }

  if (ht < 1)
    return;

  if (ptr->color == BLACK)
  {
    while (1)
    {
      pPtr = stack[ht - 1]->child[dir[ht - 1]];
      if (pPtr && pPtr->color == RED)
      {
        pPtr->color = BLACK;
        break;
      }

      if (ht < 2)
        break;

      if (dir[ht - 2] == 0)
      {
        rPtr = stack[ht - 1]->child[1];

        if (!rPtr)
          break;

        if (rPtr->color == RED)
        {
          stack[ht - 1]->color = RED;
          rPtr->color = BLACK;
          stack[ht - 1]->child[1] = rPtr->child[0];
          rPtr->child[0] = stack[ht - 1];

          if (stack[ht - 1] == root)
          {
            root = rPtr;
          }
          else
          {
            stack[ht - 2]->child[dir[ht - 2]] = rPtr;
          }
          dir[ht] = 0;
          stack[ht] = stack[ht - 1];
          stack[ht - 1] = rPtr;
          ht++;

          rPtr = stack[ht - 1]->child[1];
        }

        if ((!rPtr->child[0] || rPtr->child[0]->color == BLACK) &&
            (!rPtr->child[1] || rPtr->child[1]->color == BLACK)){
          rPtr->color = RED;
        }
        else{
          if (!rPtr->child[1] || rPtr->child[1]->color == BLACK){
            qPtr = rPtr->child[0];
            rPtr->color = RED;
            qPtr->color = BLACK;
            rPtr->child[0] = qPtr->child[1];
            qPtr->child[1] = rPtr;
            rPtr = stack[ht - 1]->child[1] = qPtr;
          }
          rPtr->color = stack[ht - 1]->color;
          stack[ht - 1]->color = BLACK;
          rPtr->child[1]->color = BLACK;
          stack[ht - 1]->child[1] = rPtr->child[0];
          rPtr->child[0] = stack[ht - 1];
          if (stack[ht - 1] == root){
            root = rPtr;
          }
          else{
            stack[ht - 2]->child[dir[ht - 2]] = rPtr;
          }
          break;
        }
      }
      else{
        rPtr = stack[ht - 1]->child[0];
        if (!rPtr)
          break;

        if (rPtr->color == RED){
          stack[ht - 1]->color = RED;
          rPtr->color = BLACK;
          stack[ht - 1]->child[0] = rPtr->child[1];
          rPtr->child[1] = stack[ht - 1];

          if (stack[ht - 1] == root){
            root = rPtr;
          }
          else{
            stack[ht - 2]->child[dir[ht - 2]] = rPtr;
          }
          dir[ht] = 1;
          stack[ht] = stack[ht - 1];
          stack[ht - 1] = rPtr;
          ht++;

          rPtr = stack[ht - 1]->child[0];
        }
        if ((!rPtr->child[0] || rPtr->child[0]->color == BLACK) &&
            (!rPtr->child[1] || rPtr->child[1]->color == BLACK)) {
          rPtr->color = RED;
        }
        else{
          if (!rPtr->child[0] || rPtr->child[0]->color == BLACK){
            qPtr = rPtr->child[1];
            rPtr->color = RED;
            qPtr->color = BLACK;
            rPtr->child[1] = qPtr->child[0];
            qPtr->child[0] = rPtr;
            rPtr = stack[ht - 1]->child[0] = qPtr;
          }
          rPtr->color = stack[ht - 1]->color;
          stack[ht - 1]->color = BLACK;
          rPtr->child[0]->color = BLACK;
          stack[ht - 1]->child[0] = rPtr->child[1];
          rPtr->child[1] = stack[ht - 1];
          if (stack[ht - 1] == root){
            root = rPtr;
          }
          else{
            stack[ht - 2]->child[dir[ht - 2]] = rPtr;
          }
          break;
        }
      }
      ht--;
    }
  }
}

// Print the inorder traversal of the tree
void traverse(struct Node *node)
{
  if (node)
  {
    traverse(node->child[0]);
    printf("(%d, %c)  ", node->data, node->color == RED ? 'r' : 'b');
    traverse(node->child[1]);
  }
  return;
}

// Driver code
int main()
{
  int ch = 0, data;
  printf("1. Insertion, 2. Deletion, 3. Traverse, 4. Exit: ");
  while (ch < 4 && ch >= 0)
  {
    printf(">");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("Enter the element to insert:");
      scanf("%d", &data);
      insertion(data);
      break;
    case 2:
      printf("Enter the element to delete:");
      scanf("%d", &data);
      delete (data);
      break;
    case 3:
      traverse(root);
      printf("\n");
      break;
    }
  }
  return 0;
}