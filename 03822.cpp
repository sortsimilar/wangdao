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
		
	}

};



int main()
{
	List test1;
	test1.insert_last(10);
	test1.insert_last(20);
	test1.insert_last(30);
	test1.insert_last(40);
	test1.insert_last(50);
	test1.insert_last(60);


//	test1.print_list();

	List test2;
	test2.insert_last(-10);
	test2.insert_last(-20);
	test2.insert_last(-30);

	test2.tail->next = test1.head->next->next->next;


//	test2.print_list();

	int counter1 = 0;
	Node *current = test1.head;
	while(current != NULL)
	{
		counter1++;
		current = current->next;
	}

//	cout<<counter1;

	int counter2 = 0;
	current = test2.head;
	while(current != NULL)
	{
		counter2++;
		current = current->next;
	}

//	cout<<counter2;


	Node *p = test1.head;
	Node *q = test2.head;

	if(counter1 > counter2)
	{
		for(int i=0;i<counter1-counter2;i++)
		{
			p = p->next;
		}
	}

	if(counter1 < counter2)
	{
		for(int i=0;i<counter2-counter1;i++)
		{
			q = q->next;
		}
	}

	while(p != q)
	{
		p = p->next;
		q = q->next;
	}

	cout<<p->key<<" "<<q->key;


	return 0;
}

