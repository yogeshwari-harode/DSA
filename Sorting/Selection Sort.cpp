#include<bits/stdc++.h>
using namespace std;

int SelectionSort(vector<int>&arr , int n)
{
	for(int i=0 ; i<n ; i++)
	{
		int min=i;
		for(int j=i+1 ; j<n ; j++)
		{
		   if(arr[j]<arr[min])
		    min=j;
		   swap(arr[i],arr[min]); 
		}
	}
}

void print(vector<int>&arr,int n)
{
	for(int i=0 ; i<n ; i++)
	cout<<arr[i]<<" ";
}

int main()
{
	int n;  cin>>n;
	for(int i=0 ; i<n ; i++)    
	cin>>arr[i];
	SelectionSort(arr,n);
	print(arr,n);
return 0;
}
