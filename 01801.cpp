#include<iostream>
#include<vector>
using namespace std;


vector<int> arr;


int delete_min()
{
	if(arr.size()==0)
	{
		cout<<"error";
		return -99999999;
	}
	else
	{
		int min_value = arr[0];
		int min_index = 0;

		for(int i=0;i<arr.size();i++)
		{
			if(arr[i] < min_value)
			{
				min_value = arr[i];
				min_index = i;
			}
		}

		for(int i=min_index;i<arr.size()-1;i++)
		{
			arr[i] = arr[i+1];
		}
		arr.erase(arr.begin()+arr.size()-1);

		return min_value;
	}
}



int main()
{

	arr.resize(6);
	arr[0] = 6;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 5;
	arr[4] = 3;
	arr[5] = 4;

	delete_min();

	for(int i=0;i<arr.size();i++)    cout<<arr[i]<<" ";

	return 0;
}




