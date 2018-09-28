#include<iostream>
#include<vector>
using namespace std;


vector<int> arr(11);

int find_common(int first, int second)
{
	while(first != second)
	{
		if(first > second)
		{
			first = (first - 1) / 2;
		}
		else if(first < second)
		{
			second = (second - 1) / 2;
		}
	}

	return first;
}



int main()
{
	
	arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 0; arr[4] = 4;
	arr[5] = 0; arr[6] = 5; arr[7] = 0; arr[8] = 0; arr[9] = 6;
	arr[10] = 0;

	cout<<find_common(1, 4);





	return 0;
}




