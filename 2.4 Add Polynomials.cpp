// sum of polyA & polyB
#include <iostream>
using namespace std;
int max(int a, int b)
{
    return(a>b?a:b);
}
int main()
{
    int i,m,n;
    int result[100],A[100],B[100];
    cout<<"highest power of A\n";
    cin>>m;
    cout<<"enter co-effcient of polyA\n";
    for(i=0;i<m;i++)
        cin>>A[i];
    cout<<"highest power of B\n";
    cin>>n;
    cout<<"enter co-effcient of polyB\n";
    for(i=0;i<n;i++)
       cin>>B[i];
        
    int size=max(m,n);
    for(i=0;i<size;i++)
        result[i]=0;
    for(i=0;i<m;i++)
         result[i]=A[i];
    for(i=0;i<n;i++)
         result[i]=result[i]+B[i];
    cout<<"sum of A&B\n";
    for(i=0;i<size;i++)
         if(i<size-1)
         cout<<result[i]<<"x^"<<i<<"+";
         else
         cout<<result[i]<<"x^"<<i;
}
