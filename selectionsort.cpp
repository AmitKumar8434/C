#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    int temp,c=0,z=0,m=0;
    int i, j, min_idx;  
    for (i = 0; i < n-1; i++)  
    {   int q=0;
        min_idx = i;
        z++;
        //Checking pass..
        cout<<"PASS : "<<i+1<<"\n";  
        //Sorting....
        for (j = i+1; j < n; j++){
            c++;
            if (arr[j] < arr[min_idx]){
                m++; 
                cout<<"Sub pass : "<<++q<<"\n";
                cout<<"(Comparing : "<<arr[j]<<" and "<<arr[min_idx]<<") : ";
                print(arr,n);
                min_idx = j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;   
    }
    cout<<"\n\nSorted array is : ";
    for(int x=0;x<n;x++)
        cout<<arr[x]<<" ";
    cout<<endl;
    cout<<"No.of Steps : "<<c;
    cout<<"\nNo.of passes : "<<z;
    cout<<"\nNo.of comparisons : "<<m;
    if(m==0)
        cout<<"\nBest Case of time complexity O(n^2)\n";
    if(m!=0 && m<c)
        cout<<"\nAverage Case of time complexity O(n^2)\n";
    if(m==c) 
        cout<<"\nWorst Case of time complexity O(n^2)\n";
}
    