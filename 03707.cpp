#include<iostream>
using namespace std;

struct Node
{
	int key;
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
		
		while(current!=NULL)
		{
			cout<<current->key<<" ";
			current = current->next;
		}
	}

	// insert a new node at last;
	void insert_last(int value)
	{
		Node *temp = new Node;
		temp->key = value;
		temp->next = NULL;

		tail->next = temp;
		tail = temp;
	}

	// delete min index;
	void delete_out(int lower, int upper)
	{
		Node *previous = head;
		Node *current = head->next;	

		while(current->next != NULL)
		{
			if(current->key>=lower && current->key<=upper)
			{
				previous->next = current->next;
				current = current->next;
			}
			else
			{
				previous = current;
				current = current->next;
			}

		}

		if(current->key>=lower && current->key<=upper)
		{
			previous->next = current->next;
		}

	}

};



int main()

{
	List test;
	test.insert_last(10);
	test.insert_last(20);
	test.insert_last(30);
	test.insert_last(40);
	test.insert_last(50);
	test.insert_last(60);
	test.insert_last(70);

	test.delete_out(25, 55);
	test.print_list(test.head->next);

	return 0;
}



