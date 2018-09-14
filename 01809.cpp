#include<iostream>
#include<vector>
using namespace std;


vector<int> arr;


void find_element(int x, int low, int high)
{
	

	if(low < high)
	{
		int mid = (low + high) / 2;

		if(x == arr[mid])
		{
			int temp = arr[mid];
			arr[mid] = arr[mid+1];
			arr[mid+1] = temp;

			return;
		}
		else if(x < arr[mid])
		{
			find_element(x, low+1, mid);
		}
		else
		{
			find_element(x, mid, high-1);
		}
	}
	else
	{
		arr.push_back(0);

		for(int i=arr.size()-1;i>high;i--)
		{
			arr[i] = arr[i-1];
		}

		arr[high] = x;

		return;
	}
}



int main()
{


	arr.resize(6);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 5;
	arr[4] = 6;
	arr[5] = 7;
	
	find_element(5, 0, arr.size()-1);

	for(int i=0;i<arr.size();i++)    cout<<arr[i]<<" ";

	return 0;
}




