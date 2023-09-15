#include <bits/stdc++.h>
using namespace std;

struct Tree
{
	int data;
	Tree *left;
	Tree *right;
	Tree(int value)
	{
		data = value;
		left = NULL;
		right = NULL;
	}
	Tree(){
		// Default Constructor...
	};
};

/*     5
	 /  \
	6    7
   / \
  10  11
*/

int total_sum_of_node(Tree *root)
{
	if (root == NULL)
	{
		return 0;
	}

	int total = total_sum_of_node(root->left) + total_sum_of_node(root->right) + root->data;

	return total;
}

int main()
{

	Tree *node = new Tree(5);
	node->left = new Tree(6);
	node->right = new Tree(7);
	node->left->left = new Tree(10);
	node->left->right = new Tree(11);

	cout << "Total Sum Of Node in My Tree : " << total_sum_of_node(node);

	return 0;
}