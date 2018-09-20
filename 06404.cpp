#include<iostream>
#include<vector>
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
	bool print_list()
	{
		Node *current = head->next;
		vector<int> arr;

		while(current != NULL)
		{
			arr.push_back(current->key);
			current = current->next;
		}

		bool isSymmetry = true;
		current = head->next;

		int i=0;
		while(current != NULL)
		{
			if(current->key != arr[arr.size()-1-i])
			{
				isSymmetry = false;
				break;
			}
			i++;
			current = current->next;
		}

		return isSymmetry;
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
	test.insert_last(30);
	test.insert_last(20);
	test.insert_last(10);


	cout<<test.print_list();

	return 0;
}



