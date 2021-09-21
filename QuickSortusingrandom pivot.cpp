#include<iostream>
#include<cstdlib>
 
using namespace std;
 
// Swapping two values.
void swap(int *a, int *b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}
 
// Partitioning the array on the basis of values at high as pivot value.
/*int Partition(int a[], int low, int high)
{
	int pivot, index, i;
	index = low;
	pivot = high;
 
	// Getting index of the pivot.
	for(i=low; i < high; i++)
	{
		if(a[i] < a[pivot])
		{
			swap(&a[i], &a[index]);
			index++;
		}
	}
	// Swapping value at high and at the index obtained.
	swap(&a[pivot], &a[index]);
 
	return index;
}
*/
int Partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high+1;
    do{
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
        	
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }while(i<j);

        arr[low]=arr[j];
        arr[j]=pivot;
    return j;
}
 
// Random selection of pivot.
int RandomPivotPartition(int a[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
	// Randomizing the pivot value in the given subpart of array.
	pvt = low + n%(high-low+1);
 
	// Swapping pivot value from high, so pivot value will be taken as a pivot while partitioning.
	swap(&a[low], &a[pvt]);
 
	return Partition(a, low, high);
}
 
int QuickSort(int a[], int low, int high)
{
	int pindex;
	if(low < high)
	{
		// Partitioning array using randomized pivot.
		pindex = RandomPivotPartition(a, low, high);
		// Recursively implementing QuickSort.
		QuickSort(a, low, pindex-1);
		QuickSort(a, pindex+1, high);
	}
	return 0;
}
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data elements to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	QuickSort(arr, 0, n-1);
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        	cout<<"->"<<arr[i];
 
	return 0;
}
