#include<iostream>
using namespace std;

int Binary_search(int n,int key,int arr[])
{
    
    int l=0,h=n-1;
    int c=0;
    
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }

    }
    return -1;
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
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            int key;
            cin>>key;
            int c=0;
            int x=Binary_search(n,key,arr);
            if(x==-1)
            {
                cout<<"Key not present\n";
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(arr[i]==key)
                    c++;
                }
                cout<<arr[x]<<"-"<<c<<endl;;
            }
        }
}