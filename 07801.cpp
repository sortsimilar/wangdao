#include<iostream>
#include<vector>
using namespace std;

struct LoopQueue
{
	int key[4];
	int front;
	int rear;
	bool tag;
};

// initialize the queue;
void initialize(LoopQueue &q)
{
	q.front = 0;
	q.rear = 0;
	q.tag = false;
}

// add one element into queue;
bool enqueue(LoopQueue &q, int x)
{

	if((q.rear % 4 == q.front) && (q.tag == true))
	{
		return false;
	}

	q.key[q.rear] = x;
	q.rear = (q.rear+1) % 4;

	q.tag = true;

	return true;
}

// delete one element;
bool dequeue(LoopQueue &q, int &x)
{
	if((q.rear == q.front) && (q.tag == false))
	{
		return false;
	}

	x = q.key[q.front];
	q.front = (q.front+1) % 4;

	q.tag = false;

	return true;
}



int main()
{
	LoopQueue test;
	initialize(test);

//	cout<<test.front<<" "<<test.rear;

	for(int i=0;i<5;i++)
	{
		cout<<enqueue(test, i*10)<<" "<<test.tag<<endl;
	}

	cout<<endl<<endl;

	for(int i=0;i<5;i++)
	{
		int x = 0;
		cout<<dequeue(test, x)<<" "<<test.tag<<endl;
	}


	return 0;
}
