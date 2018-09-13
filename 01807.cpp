#include<iostream>
#include<vector>
using namespace std;


vector<int> first;
vector<int> second;
vector<int> result;


void combine_array()
{
	int i = 0;
	int j = 0;

	while (i < first.size() && j < second.size())
	{
		if (first[i] < second[j])
		{
			result.push_back(first[i]);
			i++;
		}
		else
		{
			result.push_back(second[j]);
			j++;
		}

	}

	while(i < first.size())
	{
		result.push_back(first[i]);
		i++;
	}

	while(j < second.size())
	{
		result.push_back(second[j]);
		j++;
	}

}



int main()
{


	first.resize(4);
	first[0] = 1;
	first[1] = 2;
	first[2] = 3;
	first[3] = 4;

	second.resize(4);
	second[0] = 2;
	second[1] = 3;
	second[2] = 4;
	second[3] = 5;

	
	combine_array();

	for(int i=0;i<result.size();i++)    cout<<result[i]<<" ";

	return 0;
}




