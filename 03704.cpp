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
	void delete_min()
	{
		int min_value = head->next->key;
		Node *min_index = head->next;
		Node *min_index_previous = head;
		
		Node *current = head->next;
		Node *previous = head;

		while(current != NULL)
		{
			if(min_index->key > current->key)
			{
				min_value = current->key;
				min_index = current;
				min_index_previous = previous;
			}
		
			previous = previous->next;
			current = current->next;
		}

//		cout<<min_index->key<<" "<<min_index_previous->key;

		min_index_previous->next = min_index->next;
		delete min_index;
	}

};



int main()
{
	List test;
	test.insert_last(20);
	test.insert_last(30);
	test.insert_last(20);
	test.insert_last(10);
	test.insert_last(30);
	test.insert_last(60);


	test.delete_min();
	test.print_list(test.head->next);

	return 0;
}



