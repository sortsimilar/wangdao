#include<iostream>
#include<vector>
using namespace std;

struct Node
{
	int index;
	int value;
};




int main()
{
	int x = 3;
	int n = 5;

	vector<Node> stack;
	for(int i=n-1;i>=0;i--)
	{
		Node temp;
		temp.index = i;
		temp.value = 0;

		stack.push_back(temp);
	}

	stack[stack.size()-1].value = 1;
	stack[stack.size()-2].value = 2 * x;


	while(stack.size() != 2)
	{
		Node n_2 = stack.back();
		stack.pop_back();
		Node n_1 = stack.back();
		stack.pop_back();
		
		(stack.back()).value = 2*x*n_1.value - 2*(n_1.index)*(n_2.value);

		stack.push_back(n_1);
	}

	stack.pop_back();

	cout<<(stack.back()).value;


	return 0;
}




