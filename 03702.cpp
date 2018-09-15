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
	void print_list()
	{
		Node *current;
		current = head->next;
		while (current != NULL)
		{
			cout << current->data <<" ";
			current = current->next;
		}
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


	void delete_element(int x, Node *previous, Node *current)
	{
		if(current==NULL)    return;

		if(current->data != x)
		{
			delete_element(x, current, current->next);
		}
		else
		{
			Node *element_deleted = current;
			previous->next = current->next;
			delete element_deleted;

			delete_element(x, previous, current->next);
		}
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


	test.delete_element(20, test.head, test.head->next);

	test.print_list();

	return 0;
}



