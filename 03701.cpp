// Reference: https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr

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
		head = NULL;
		tail = NULL;
	}

	// print all node in list;
	void print_list()
	{
		Node *current;
		current = head;
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

		if(head!=NULL)
		{
			tail->next = temp;
			tail = temp;
		}
		else
		{
			head = temp;
			tail = temp;
		}
	}


	// delete at certain position;
	void delete_element(int x)
	{
		Node *current = head;
		Node *previous = NULL;



		while(current != NULL)
		{
//			cout<<current->data<<" ";

			if(current->data != x)
			{
				previous = current;
				current = current->next;
			}
			else
			{
				Node *element_deleted = current;
				previous->next = current->next;

				current = current->next;
				delete element_deleted;
			}
		}
	}
};



int main()
{
	List test;
	test.insert_last(20);
	test.insert_last(30);
	test.insert_last(40);
	test.insert_last(30);
	test.insert_last(30);
	test.insert_last(60);
//	test.insert_start(10); // test insert at start;
//	test.insert_position(1, 35); // insert at certain position;
//	test.delete_first(); // delete first element; 
//	test.delete_last(); // delete last element;
//	test.delete_position(1);

	test.delete_element(30);

	test.print_list();

	return 0;
}



