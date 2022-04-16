#include<iostream>
using namespace std;
void linear_search(int arr[],int n,int key)
{
    int comp=0,flag=0;
    for (int i=0;i<n;i++)
    {
        comp++;
        if (arr[i]==key)
        {
            cout<<"Present"<<" "<<comp<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
       cout<<"Not Present"<<" "<<comp<<endl;
      

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
           cin>>arr[i];
        int key;
        cin>>key;

        linear_search(arr,n,key);
    }

}