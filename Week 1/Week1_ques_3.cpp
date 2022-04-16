#include<iostream>
#include<cmath>
using namespace std;
void jump_search(int n,int a[],int key)
{
    int i=0,j=sqrt(n);
    int c=0,flag=0;

    
    while(a[j]<=key && j<n)
    {
        
        i=j;
        j+=sqrt(n);
        c++;
        if(j>n-1)
        {
            j=n;
        }
        
    }
    
    for(int k=i;k<=j;k++)
        {
            c++;
            if(a[k]==key)
            {
                cout<<"Key Found"<<" "<<c<<endl;
                flag=1;
            }
        }
    if(flag==0)
    {
        cout<<"Not Found"<<" "<<c<<endl;
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;
        jump_search(n,a,key);
        
    }
}