#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

class List
{
	
public:
	Node * head, *tail; //tail help us add element at last;
	List()
	{
		head = new Node;
		head->next = NULL;
		tail = head;
	}

	// print all node in list;
	void print_list(Node *current)
	{
		
		if(current->next!=NULL)
		{
			print_list(current->next);
		}

		cout<<current->data<<" ";

	}

	// insert a new node at last;
	void insert_last(int value)
	{
		Node *temp = new Node;
		temp->data = value;
		temp->next = NULL;

		tail->next = temp;
		tail = temp;
	}

};



int main()
{
	List test;
	test.insert_last(20);
	test.insert_last(30);
	test.insert_last(20);
	test.insert_last(30);
	test.insert_last(30);
	test.insert_last(60);


	test.print_list(test.head->next);

	return 0;
}



