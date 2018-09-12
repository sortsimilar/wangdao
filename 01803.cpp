#include<iostream>
#include<vector>
using namespace std;


int counter = 0;
vector<int> arr;


void delete_element(int x)
{
	
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i] != x)
		{
			arr[counter] = arr[i];
			counter++;
		}
	}
}



int main()
{

	arr.resize(6);
	arr[0] = 6;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 1;
	arr[4] = 3;
	arr[5] = 4;

	
	delete_element(1);


	for(int i=0;i<counter;i++)    cout<<arr[i]<<" ";

	return 0;
}




