#include<iostream>
#include<vector>
using namespace std;

int num = 0;
vector<int> s1;
vector<int> s2;


void Enqueue(int x)
{
	num++;
	s1.push_back(x);
}


int Dequeue()
{
	for(int i=0;i<num;i++)
	{
		int current = s1.back();
		s1.pop_back();
		s2.push_back(current);
	}

	int result = s2.back();
	s2.pop_back();
	num--;

	for(int i=0;i<num;i++)
	{
		int current = s2.back();
		s2.pop_back();
		s1.push_back(current);
	}

	return result;
}



int main()
{
	Enqueue(10);	
	Enqueue(20);
	Enqueue(30);

	for(int i=0;i<3;i++)
	{
		cout<<Dequeue()<<" ";
	}


	return 0;
}



