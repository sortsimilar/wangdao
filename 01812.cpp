#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;


int major_element(int A[],int n)
{
	/* non-negative returned if major element exist. */
	int seed = A[0];
	int cnt = 1;
	int p;
	for (int i=1;i<n;i++)
	{
		if(seed == A[i])
			cnt++;
		else
			if(cnt>0)  cnt--;
			else  seed = A[i];
	}
	cnt = 0;
	for(int i=0;i<n;i++)
		if(A[p=i] == seed) cnt++;
	if(cnt>(n>>1))
		return p;
	return -1;
}



int main()
{
	int a[] = {1,5,2,5,3,5,4,5,5};
	printf("Major elem exists in a?: %s \n",major_element(a,9)>-1?"Yes!":"No!");
	printf("Major elem is: %d \n",a[major_element(a,9)]);
 
	int b[] = {1,2,3,4,4,4,4,5};
	printf("Major elem exists in b?: %s \n",major_element(b,8)>-1?"Yes!":"No!");
	
	return 0;
}






