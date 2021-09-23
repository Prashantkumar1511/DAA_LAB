#include<iostream>
using namespace std;


void findCommon(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0,flag=0;
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else
        {
            flag=1;
            
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    if(flag==0)
        cout<<"No Common"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        
        int arr1[n];
        
        for(int i=0;i<n;i++)
            cin>>arr1[i];
        cin>>m;
        int arr2[m];
        for(int i=0;i<m;i++)
            cin>>arr2[i];
        findCommon(arr1,arr2,n,m);
    }
}