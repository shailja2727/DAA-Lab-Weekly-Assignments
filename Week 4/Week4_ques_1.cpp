#include<iostream>
using namespace std;
int comp=0;
int Merge(int A[],int l,int mid,int h)
{
    int count=0;
    int i=l,j=mid+1,k=l;
    int B[h+1];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        B[k++]=A[i++];
        else
        {
        B[k++]=A[j++];
        count+=mid-i+1;
        }
        comp++;
    }
    for(;i<=mid;i++)
    B[k++]=A[i];

    for(;j<=h;j++)
    B[k++]=A[j];

    for(i=l;i<=h;i++)
    {
        A[i]=B[i];
    }
    return count;
}
int Merge_sort(int A[],int l,int h)
{
    int c_inversion=0;
    if(l<h)
    {
        int mid=l+(h-l)/2;

        c_inversion +=Merge_sort(A,l,mid);
        c_inversion +=Merge_sort(A,mid+1,h);
        c_inversion +=Merge(A,l,mid,h);

    }
    return c_inversion;
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
        int inver=Merge_sort(A,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<"\nComparisons:"<<comp<<endl;
        cout<<"Inversions:"<<inver<<endl;
    }
}