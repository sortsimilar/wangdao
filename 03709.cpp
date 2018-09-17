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
		Node *min_index_previous = head;
		
		Node *current = head;

		while(current->next != NULL)
		{
			if(min_value > current->next->key)
			{
				min_value = current->next->key;
				min_index_previous = current;
			}
		
			current = current->next;
		}


		Node *minimum = min_index_previous->next;
		min_index_previous->next = min_index_previous->next->next;
		cout<<minimum->key<<" ";
		delete minimum;
	}

	void delete_all()
	{
		while(head->next!=NULL)
		{
			delete_min();
		}
	}

};



int main()
{
	List test;
	test.insert_last(10);
	test.insert_last(60);
	test.insert_last(20);
	test.insert_last(50);
	test.insert_last(30);
	test.insert_last(40);


	test.delete_all();
//	test.print_list(test.head->next);

	return 0;
}



