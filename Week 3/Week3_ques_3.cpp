#include<iostream>
using namespace std;

void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[h+1];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        B[k++]=A[i++];
        else
        B[k++]=A[j++];
    }
    for(;i<=mid;i++)
    B[k++]=A[i];

    for(;j<=h;j++)
    B[k++]=A[j];

    for(i=l;i<=h;i++)
    {
        A[i]=B[i];
    }
}
void Merge_sort(int A[],int l,int h)
{
    if(l<h)
    {
        int mid=l+(h-l)/2;

        Merge_sort(A,l,mid);
        Merge_sort(A,mid+1,h);
        Merge(A,l,mid,h);

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        Merge_sort(A,0,n-1);

        int flag=0;
        for (int i=0;i<n-1;i++)
        {
            if (A[i]==A[i+1])
            { 
                flag=1;
            }
        }
        if (flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}