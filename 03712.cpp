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

	// delete repeat element;
	void delete_repeat()
	{
		Node *previous = head->next;
		Node *current = head->next->next;

		while(current != NULL)
		{
			if(previous->key != current->key)
			{
				previous = previous->next;
				current = current->next;
			}
			else
			{
				Node *element_delete = current;
				previous->next = current->next;
				current = current->next;
				delete element_delete;
			}
		}
	}

};



int main()
{
	List test;
	test.insert_last(10);
	test.insert_last(20);
	test.insert_last(20);
	test.insert_last(30);
	test.insert_last(30);
	test.insert_last(30);


	test.delete_repeat();


	Node *current = test.head->next;
	while(current != NULL)
	{
		cout<<current->key<<" ";
		current = current->next;
	}
	cout<<endl;

	return 0;
}



