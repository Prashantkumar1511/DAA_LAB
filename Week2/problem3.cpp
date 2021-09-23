#include<iostream>
#include<math.h>
using namespace std;


void countPairs(int arr[],int key,int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==key)
                count++;
        
        }
    }
    cout<<count<<endl;
    return ;
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
        countPairs(arr,key,n);
    }
}