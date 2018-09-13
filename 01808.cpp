#include<iostream>
#include<vector>
using namespace std;


vector<int> arr;


void swap_array(int start, int end)
{
	for(int i=0;i<(end-start+1)/2;i++)
	{
		int temp = arr[start+i];
		arr[start+i] = arr[end-i];
		arr[end-i] = temp;
	}
}



void move_array(int m, int n)
{
	swap_array(0, arr.size()-1);
	swap_array(0, n-1);
	swap_array(n, arr.size()-1);
}



int main()
{


	arr.resize(6);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	
	move_array(4, 2);

	for(int i=0;i<arr.size();i++)    cout<<arr[i]<<" ";

	return 0;
}




