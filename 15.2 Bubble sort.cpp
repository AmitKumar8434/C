#include <iostream>
using namespace std;

void Bubblesort(int a[],int n)
{
     int i,j,flag,temp,comp=0;
    for(i=0;i<n-1;i++){
        cout<<"PASS: "<<i+1<<endl;
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
          comp++; // Counting No of Comparisons
          cout<<"  Sub-pass "<<j+1<<endl;
          if(a[j] > a[j+1]){
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
             flag=1;
          }
          for(int k=0;k<n;k++)
          {
              cout<<a[k]<<" "; // Printing the sub-pass array
          }
          cout<<endl;
        }
        cout<<"----------------------------"<<endl;
        if(flag==0)
            break;
    }
       cout<<"ELEMENTS in SORTED ORDER are : ";
         for(i=0;i<n;i++)
       {
        cout<<a[i]<<" ";

    }
    cout<<endl<<"No of comparisons: "<<comp;
}

int main(void)
{
    int n,i;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Bubblesort(arr,n);
    return 0;

}
