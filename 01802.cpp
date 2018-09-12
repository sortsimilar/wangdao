#include<iostream>
#include<vector>
using namespace std;


vector<int> arr;


void reverse_arr()
{
	for(int i=0;i<(arr.size()-1)/2;i++)
	{
		int temp = arr[i];
		arr[i] = arr[arr.size()-1-i];
		arr[arr.size()-1-i] = temp;
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

	
	reverse_arr();


	for(int i=0;i<arr.size();i++)    cout<<arr[i]<<" ";

	return 0;
}




