#include<stdio.h>
#include<conic.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node tree;
void create_tree(struct node *);
struct node *insertElement(strut node *);
void inorderTraversal(struct node *);
void preorderTraversal(struct node *);
void postorderTraversal(struct node *);
struct node *findSmallestElement(struct node *);
struct node *findLargestElement(struct node *);
struct node *deleteElement(struct node *, int);
int totalNodes(struct node *);
int totalInternalNodes(struct node *);
int totalExternalNodes(struct node *);
int Heigth(struct node *);
struct node *deleteTree(struct node *);
 int min()
 {
 	int option, val;
 	struct node *ptr;
 	create_tree(tree);
 	clrscr();
 	do
 	{
 		printf("\n ******MAIN MENU****** \n");
		printf("\n 1. Insert Element");
		printf("\n 2. inorder Traversal");
		printf("\n 3. Perorder Traversal");
		printf("\n 4. Postorder Traversal");
		printf("\n 5. find the smallest element");
		printf("\n 6. find the largest element");
		printf("\n 7. Delete an Element");
		printf("\n 8. Count the total nodes");
		printf("\n 9. Count the internal nodes");
		printf("\n 10. Count the external nodes");
		printf("\n 11. Delete Tree");
		printf("\n 12. Exist");
		
		
	 }
 }

