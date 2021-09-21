#include<bits/stdc++.h>
using namespace std;
void MaxMin(int arr[],int l,int h,int &min,int &max){
	if (l == h)       
    {
        max=min=arr[l];
        return;
    }
    if (h - l == 1)         
    {
        if (arr[l] < arr[h])  
        {
            if (min > arr[l]) {  
                min = arr[l];
            }
            if (max < arr[h]) { 
                max = arr[h];
            }
        }
        else {
            if (min > arr[h]) {  
                min = arr[h];
            }
 
            if (max < arr[l]) {  
                max = arr[l];
            }
        }
        return;
    }
    int min1=INT_MAX;
    int max1=INT_MIN;
    int mid = (l+ h) / 2;
    MaxMin(arr, l, mid, min, max);
    MaxMin(arr, mid + 1, h, min1, max1);
    if(max<max1) max=max1;
    if(min1<min) min=min1;
}
int main(){
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter  "<<n<<"  elements in array:\n";
	for(int i=0;i<n;i++) cin>>arr[i];
	int max = INT_MIN, min = INT_MAX;
	MaxMin(arr,0,n-1,min,max);
	cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max;
	return 0;
}
