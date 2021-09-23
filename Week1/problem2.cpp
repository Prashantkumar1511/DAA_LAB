#include<iostream>
using namespace std;


void binarySearch(int arr[],int key,int n)
{
    int c=0;
    int l=0;
    int r=n-1;
    int mid=0;
    while(l<r)
    {
        c++;
        mid=(l+r)/2;
        if(arr[mid]==key)
        {
            cout<<"Present "<<c<<endl;
            return;
        }
        if(arr[mid]>key)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }
    cout<<"Not Present "<<c<<endl;
    return;
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
        binarySearch(arr,key,n);
    }
}