#include <stdio.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

struct node* newNode(int data)
{
    node *node = (struct node*) malloc(sizeof(node));
    node->data = data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}

int main()
{

    node* node = newNode(10);

    node->left = newNode(15);
    node->right = newNode(25);

    printf("%d \n", node->data);
    printf("%d \n", node->left->data);
    printf("%d \n", node->right->data);


    return 0;
}