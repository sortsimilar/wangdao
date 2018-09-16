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
	void reverse_link()
	{
		Node *previous = head->next;
		Node *current = head->next->next;	
		Node *next = current->next;

		while(current->next != NULL)
		{
			

			previous->next = next;		
			Node *temp = head->next;
			head->next = current;
			current->next = temp;

			current = next;
			next = current->next;
		}

//		cout<<current->key<<endl;
		previous->next = NULL;
		Node *temp = head->next;
		head->next = current;
		current->next = temp;
	}

};



int main()

{
	List test;
	test.insert_last(10);
	test.insert_last(20);
	test.insert_last(30);
	test.insert_last(40);

	test.reverse_link();
	test.print_list(test.head->next);

	return 0;
}



