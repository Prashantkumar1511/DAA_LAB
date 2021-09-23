#include<iostream>
using namespace std;

void linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Key is Present"<<endl;
            return;
        }

    }
    cout<<"Key is Not Present"<<endl;
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
            cin>>arr[i];
        int key;
        cin>>key;
        linearSearch(arr,n,key);        

    }
}