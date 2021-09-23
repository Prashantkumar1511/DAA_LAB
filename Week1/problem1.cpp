#include<iostream>
using namespace std;


void linearSearch(int arr[],int key,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        c++;
        if(arr[i]==key)
        {
            cout<<"Present "<<c<<endl;
            return;
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
        int n,key;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        linearSearch(arr,key,n);
        
    }

   
}

