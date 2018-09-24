#include<iostream>
#include<string>
#include<vector>
using namespace std;




int main()
{
	string test = "HHSSHS";
	string result = "";

	vector<char> stack;

	for(int i=0;i<test.length();i++)
	{
		if(test[i]=='S')
		{
			result = result + test[i];
		}
		else
		{
			stack.push_back(test[i]);
		}
	}

	int num = stack.size();
	for(int i=0;i<num;i++)
	{
		result = result + stack.back();
		stack.pop_back();
	}

	cout<<result;


	return 0;
}
