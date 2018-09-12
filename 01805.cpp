#include<iostream>
#include<vector>
using namespace std;


int counter = 0;
vector<int> arr;


void delete_element(int s, int t)
{
	if(s>=t)
	{
		return;
	}

	if(arr.size()==0)
	{
		return;
	}
	
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]<s || arr[i]>t)
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
	arr[3] = 5;
	arr[4] = 3;
	arr[5] = 4;

	
	delete_element(2, 4);


	for(int i=0;i<counter;i++)    cout<<arr[i]<<" ";

	return 0;
}




