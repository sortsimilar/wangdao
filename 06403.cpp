#include<iostream>
#include<vector>
using namespace std;




int main()
{
	vector<char> sequence (4);
	sequence[0] = 'I';
	sequence[1] = 'I';
	sequence[2] = 'I';
	sequence[3] = 'O'; 

	int num = 0;
	int isLegal = true;

	for(int i=0;i<sequence.size();i++)
	{
		if(sequence[i]=='I')
		{
			num++;
		}
		else
		{
			num--;

			if(num<0)
			{
				isLegal = false;
				break;
			}
		}
	}

	if(num!=0)    isLegal = false;

	cout<<isLegal;

	return 0;
}



