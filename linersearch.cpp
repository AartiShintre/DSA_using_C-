#include<iostream>
using namespace std;
	int linersearch(int a[],int target)
	{
		int i;
		for(i=0;i<5;i++)
		{
				if(a[i]==target)
		{
			return i;
		}	
		}	
		return -1;
	}

int main()
{
	int a[5]={9,5,2,7,8};
	int target=8;
	int index=linersearch(a,target);
	if(index!=-1)
	{
		cout<<"element found at "<<index<<endl;
	}
	else{
		cout<<"element don't found";
	}
	return 0;
}
