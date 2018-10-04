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
	Node *head, *tail; //tail help us add element at last;
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


	bool find_last_element(int k)
	{
		int counter = 0;
		Node *p = head;
		Node *q = head;
		
		while((counter != k) && (p!= NULL))
		{
			p = p->next;
			counter++;
		}

		if(p==NULL)
		{
			return 0;
		}
		else
		{

	//		cout<<p->key;
	
			while(p!=NULL)
			{
				p = p->next;
				q = q->next;
			}

			cout<<q->key;

			return 1;
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


	cout<<test.find_last_element(7);

	return 0;
}

