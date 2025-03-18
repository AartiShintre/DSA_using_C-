#include<iostream>
using namespace std;
int binarysearch(int a[],int target)
{
	int low=0;
	int high=4;

	while(low<=high)
	{
			int mid=(low+high)/2;
		if(a[mid]==target)
		{
			return mid;
		}
		else if(target<a[mid])
		{
			high=mid-1;
		}
		if(target>a[mid])
		{
			low=mid+1;
		}
	}
	return -1;
	
}
int main()
{
	int a[5]={1,2,3,4,5};
	int target=5;
	int index=binarysearch(a,target);
	if(index!=-1){
		cout<<"index found at"<<index;
	}
	else{
		cout<<"index not found";
	}
	
	return 0;
}
