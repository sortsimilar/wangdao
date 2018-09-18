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
	List test;
	test.insert_last(10);
	test.insert_last(20);
	test.insert_last(30);
	test.insert_last(40);
	test.insert_last(50);
	test.insert_last(60);


//	test.print_list(test.head->next);

	List link1;
	List link2;

	Node *current = test.head->next;
	int counter = 0;

	while(current != NULL)
	{
		if(counter%2 == 0)
		{
			link1.tail->next = current;
			link1.tail = current;
			current = current->next;
		}
		else
		{
			Node *temp = current->next;

			current->next = link2.head->next;
			link2.head->next = current;

			current = temp;
		}
		
		counter++;
	}

	link1.tail->next = NULL;



	current = link1.head->next;
	while(current != NULL)
	{
		cout<<current->key<<" ";
		current = current->next;
	}

	cout<<endl;

	current = link2.head->next;
	while(current != NULL)
	{
		cout<<current->key<<" ";
		current = current->next;
	}


	return 0;
}



