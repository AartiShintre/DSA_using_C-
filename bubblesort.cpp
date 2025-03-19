#include<iostream>
using namespace std;
int bubblesort(int a[],int n)
{
	int i,j;//j is the comparisions,i is the iteration
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<"sorted array is"<< a[i];
	}
	
}
int main()
{
	int n=5;
	int a[n]={7,5,1,9,2};
	bubblesort(a,n);
	
}
