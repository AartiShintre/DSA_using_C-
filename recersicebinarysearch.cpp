#include<iostream>
using namespace std;
int recersivebinarysearch(int a[],int target,int low,int high)
{

	while(low<=high)
	{
			
	int mid=(low+high)/2;
		
		if(a[mid]==target)
		{
			return mid;
		}
		else if(target<a[mid])
		{
			return recersivebinarysearch(a,target,low,mid-1);
		}
		if(target>a[mid])
		{
		return recersivebinarysearch(a,target,mid+1,high);
		}
	}
	return -1;
	
}
int main()
{
	int a[5]={1,2,3,4,5};
	int target=5;
	int low=0;
	int high=4;

	int index=recersivebinarysearch(a,target,low,high);
	if(index!=-1){
		cout<<"index found at"<<index;
	}
	else{
		cout<<"index not found";
	}
	
	return 0;
}
