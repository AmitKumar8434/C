#include <iostream>
using namespace std;
int c=0,comp=0;
struct arr{
    int num;
    int index;
};

void Merge(struct arr a[],int lb,int mid,int ub)
{
    int i=lb, j=mid+1, k=lb;
    struct arr b[100];

    while(i<=mid && j<=ub &&(++comp))
    {
        if(a[i].num<=a[j].num)
        {
            b[k].num=a[i].num;
            b[k].index=a[i].index;
            i++;
            k++;
        }
        else
        {
            b[k].num=a[j].num;
            b[k].index=a[j].index;
            j++;
            k++;
        }
    }
    while(i<=mid && (++comp))
    {
      b[k].num=a[i].num;
      b[k].index=a[i].index;
      i++;
      k++;

    }
    while(j<=ub && (++comp))
    {
       b[k].num=a[j].num;
       b[k].index=a[j].index;
       j++;
       k++;
    }

    for(k=lb;k<=ub;k++)
    {
        a[k].num=b[k].num;
        a[k].index=b[k].index;
    }
}

void Mergesort(struct arr a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        Mergesort(a,lb,mid);
        Mergesort(a,mid+1,ub);
        Merge(a,lb,mid,ub);
        cout<<"pass: "<<++c<<endl;
        for (int i=lb;i<=ub;i++)
        {
          cout<<a[i].num<<" ";
        }
        cout<<endl;
        for (int i=lb;i<=ub;i++)
        {
          cout<<a[i].index<<" ";
        }

        cout<<endl;
    }
}

int main()
{
    int i,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    struct arr a[n];
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i].num;
        a[i].index=i;
    }
    Mergesort(a,0,n-1);
    cout<<"No of Comparisons: "<<comp<<endl;
    cout<<"Sorted order: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i].num<<" ";
    }
    return 0;
}
