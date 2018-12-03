#include<iostream>
#include<vector>
using namespace std;





int main()
{
	int L = 5;
	int A[] = {11, 13, 15, 17, 19};
	int B[] = {12, 14, 16, 18, 20};

	int p1 = 0;
	int p2 = 0;
	int mid_num = 0;
	
	for(int i=0;i<L;i++)
	{
		if(A[p1]<=B[p2])
		{
			mid_num = A[p1];
			p1++;			
		}
		else
		{
			mid_num = B[p2];
			p2++;
		}
	}
	
	cout<<mid_num;

	return 0;
}






