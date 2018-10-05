#include<iostream>
using namespace std;


struct Node
{
	int key;
	int weight;
	Node *left;
	Node *right;
};


int total = 0;
void in_order(Node *current, int deep)
{
	if(current != NULL)
	{
		if(current->left==NULL && current->right==NULL)
		{
			total = total + current->weight * deep;
		}

		in_order(current->left, deep+1);
		cout<<current->key<<" ";
		in_order(current->right, deep+1);
	}
}



int main()
{
	Node *root = new Node;

	root->key = 1;
	root->weight = 1;
	root->left = new Node;
	root->right = new Node;
	
	root->left->key = 2;
	root->left->weight = 2;
	root->left->left = NULL;
	root->right->right = NULL;

	root->right->key = 3;
	root->right->weight = 3;
	root->right->left = new Node;
	root->right->right = new Node;

	root->right->left->key = 4;	
	root->right->left->weight = 4;	
	root->right->left->left = NULL;
	root->right->left->right = NULL;

	root->right->right->key = 5;
	root->right->right->weight = 5;
	root->right->right->left = NULL;
	root->right->right->right = NULL;



	in_order(root, 0);
	cout<<endl<<total;


//	cout<<root->right->left->left_tag;







	return 0;
}






