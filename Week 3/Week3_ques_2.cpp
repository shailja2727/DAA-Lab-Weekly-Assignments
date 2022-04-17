#include<iostream>
using namespace std;
void Selection_sort(int a[],int n)
{
    int comp=0,swap=0;
    int i,j;
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            comp++;
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        int temp=a[min_index];
        a[min_index]=a[i];
        a[i]=temp;
        swap++;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<"Comparisons="<<comp<<endl;
    cout<<"Swaps="<<swap<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Selection_sort(a,n);
    }
}