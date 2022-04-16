#include<iostream>
using namespace std;
void Index(int arr[],int n)
{
    int i,j,k,flag=0;
    for(i=1;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            for(k=j+1;k<=n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    cout<<i<<" "<<j<<" "<<k<<" "<<endl;
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0)
    {
        cout<<"No Sequence found"<<endl;
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
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        Index(arr,n);
    }
}