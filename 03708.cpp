#include<iostream>
#include<map>
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
	List test1;
	test1.insert_last(10);
	test1.insert_last(20);
	test1.insert_last(30);
	test1.insert_last(40);

	List test2;
	test2.insert_last(-10);
	test2.insert_last(-20);
	test2.insert_last(-30);
	test2.insert_last(-40);

	test2.head->next->next->next->next = test1.head->next->next;

	int length1 = 0;
	int length2 = 0;

	Node *current = test1.head->next;
	while(current != NULL)
	{
		current = current->next;
		length1++;
	}

	current = test2.head->next;
	while(current != NULL)	
	{
		current = current->next;
		length2++;
	}



	Node *current1 = test1.head->next;
	Node *current2 = test2.head->next;

	if(length2 > length1)
	{
		for(int i=0;i<length2-length1;i++)
		{
			current2 = current2->next;
		}
	}
	else
	{
		for(int i=0;i<length1-length2;i++)
		{
			current1 = current1->next;
		}
	}


	while(current1 != NULL && current2 != NULL)
	{
		if(current1 == current2)
		{
			cout<<current1->key<<" ";
		}

		current1 = current1->next;
		current2 = current2->next;
	}


	return 0;
}




