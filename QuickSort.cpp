#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int* arr,int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	for(int j=0;j<high-1;j++)
	{
		if(j<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
void quickSort(int* arr,int low,int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}
void printArray(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
  int arr[100];
  int size;
  cout<<"Enter number of elements:";
  cin>>size;
  for(int i=0;i<size;i++)
  {
  	cout<<"Enter element"<<" "<<i+1<<":";
  	cin>>arr[i];
  }
  quickSort(arr,0,size-1);
  printArray(arr,size);
}
   	 
