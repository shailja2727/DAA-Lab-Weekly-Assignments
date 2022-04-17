#include<iostream>
using namespace std;
void Insertion_sort(int a[],int n)
{
    int i,j,t;
    int comp=0,shift=0;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        t=a[i];
        while(j>-1 && a[j]>t)
        {
            comp++;
            a[j+1]=a[j];
            shift++;
            j--;
        }
        shift++;
        a[j+1]=t;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<"Comparisons:"<<comp<<endl;
    cout<<"Shifts:"<<shift<<endl;
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
        Insertion_sort(a,n);
    }
}
