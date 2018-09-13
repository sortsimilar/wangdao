#include<iostream>
#include<vector>
using namespace std;


int counter = 0;
vector<int> arr;


void delete_repeat()
{
	arr[counter] = arr[0];
	counter++;

	for(int i=1;i<arr.size();i++)
	{
		if(arr[i] != arr[i-1])
		{
			arr[counter] = arr[i];
			counter++;
		}
	}	
}



int main()
{


	arr.resize(6);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 3;
	arr[5] = 4;


	
	delete_repeat();

	for(int i=0;i<counter;i++)    cout<<arr[i]<<" ";

	return 0;
}




