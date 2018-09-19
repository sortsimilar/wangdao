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

	Node *previous = first.head;
	Node *current = first.head->next;
	first.tail = first.head;


	while(first_index!=NULL && second_index!=NULL)
	{
		if(first_index->key < second_index->key)
		{		
			Node *temp = first_index->next;
			delete first_index;
			first_index = temp;
		}
		else if(first_index->key > second_index->key)
		{
			Node *temp = second_index->next;
			delete second_index;
			second_index = temp;
		}
		else
		{
			Node *temp = first_index->next;
			first.tail->next = first_index;
			first.tail = first_index;
			first_index = temp;

			temp = second_index->next;
			delete second_index;
			second_index = temp;
		}
	}

	while(first_index != NULL)
	{
		Node *temp = first_index->next;
		delete first_index;
		first_index = temp;
	}

	while(second_index != NULL)
	{
		Node *temp = second_index->next;
		delete second_index;
		second_index = temp;
	}

	first.tail->next = NULL;
	delete second.head;

	current = first.head->next;
	while(current != NULL)
	{
		cout<<current->key<<" ";
		current = current->next;
	}
	cout<<endl;

	return 0;
}



