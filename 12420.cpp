#include<iostream>
#include<string>
using namespace std;


struct Node
{
	string key;
	Node *left;
	Node *right;
};


void in_order(Node *current, Node *root)
{
	if(current != NULL)
	{
		if((current->left != NULL || current->right != NULL) && current != root)
		{
			cout<<"(";
		}

		in_order(current->left, root);
		cout<<current->key;
		in_order(current->right, root);

		if((current->left != NULL || current->right != NULL) && current != root)
		{
			cout<<")";
		}
	}
}



int main()
{
	Node *root = new Node;

	root->key = "*";
	root->left = new Node;
	root->right = new Node;

// left tree;	
	root->left->key = "+";
	root->left->left = new Node;
	root->left->right = new Node;

	root->left->left->key = "a";
	root->left->left->left = NULL;
	root->left->left->right = NULL;

	root->left->right->key = "b";
	root->left->right->left = NULL;
	root->left->right->right = NULL;

// right tree;
	root->right->key = "*";
	root->right->left = new Node;
	root->right->right = new Node;

	root->right->left->key = "c";	
	root->right->left->left = NULL;
	root->right->left->right = NULL;

	root->right->right->key = "-";
	root->right->right->left = NULL;
	root->right->right->right = new Node;

	root->right->right->right->key = "d";
	root->right->right->right->left = NULL;
	root->right->right->right->right = NULL;


	in_order(root, root);


//	cout<<root->right->left->left_tag;







	return 0;
}






