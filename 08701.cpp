#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
	string test = "6-{[(2+3)/4]-5}";

	vector<char> stack;

	for(int i=0;i<test.length();i++)
	{
		if(test[i]=='(' || test[i]=='[' || test[i]=='{')
		{
			stack.push_back(test[i]);
		}

		if(test[i]==')')
		{
			if(stack.back() == '(')
			{
				stack.pop_back();
			}
			else
			{
				cout<<"error";
				break;
			}
		}

		if(test[i]==']')
		{
			if(stack.back() == '[')
			{
				stack.pop_back();
			}
			else
			{
				cout<<"error";
				break;
			}
		}

		if(test[i]=='}')
		{
			if(stack.back() == '{')
			{
				stack.pop_back();
			}
			else
			{
				cout<<"error";
				break;
			}
		}

	}

	if(stack.size()!=0)    cout<<"error";

	return 0;
}




