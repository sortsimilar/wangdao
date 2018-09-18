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



};



int main()
{
	List first;
	first.insert_last(10);
	first.insert_last(30);
	first.insert_last(50);

	List second;
	second.insert_last(20);
	second.insert_last(30);
	second.insert_last(50);
	second.insert_last(80);

	List result;
	Node *first_index = first.head->next;
	Node *second_index = second.head->next;
	while(first_index!=NULL && second_index!=NULL)
	{
		if(first_index->key < second_index->key)
		{			
			first_index = first_index->next;
		}
		else if(first_index->key > second_index->key)
		{
			second_index = second_index->next;
		}
		else
		{
			result.insert_last(first_index->key);
			first_index = first_index->next;
			second_index = second_index->next;
		}
	}


	Node *current = result.head->next;
	while(current != NULL)
	{
		cout<<current->key<<" ";
		current = current->next;
	}
	cout<<endl;

	return 0;
}



