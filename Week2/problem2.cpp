#include<iostream>
using namespace std;

void findIndices(int arr[],int n)
{
    int i=0,j=0,k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    cout<<i<<","<<j<<","<<k<<endl;
                    return;
                }
            }
        }
    }
    cout<<"Not Found  "<<endl;
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
       
        findIndices(arr,n);

    }
}