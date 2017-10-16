
#include<stdio.h>
#include<stdlib.h>
typedef struct BIN_TREE{
int value;
struct bin_tree *right;
struct bin_tree  *left;

}bin_tree;

bin_tree *initree(int val);
void setvalue(bin_tree *tree, int elem);
void printleft(bin_tree *tree);

int main(int argc, char *argv[])
{	
	bin_tree tree=*initree(1);
	//tree->left=bin_tree;
	//tree->right=bin_tree;
	printleft(&tree);
	return 0;
}

bin_tree *initree(int val)
{
  bin_tree *tree = malloc(sizeof(bin_tree));
  tree->left = NULL;
  tree->right= NULL;
  tree->value =val;
  return tree;
}

void setvalue(bin_tree *tree, int elem)
{
  tree->value = elem;
}

void printleft(bin_tree *tree)
{
	printleft(tree->left);
	printf("%d/n",tree->value);
	printleft(tree->left);
}
