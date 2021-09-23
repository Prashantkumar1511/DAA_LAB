#include<iostream>
using namespace std;


void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

void selectionSort(int arr[],int n)
{
  
    
    int minidx,i,j;
    int compare=0,swaps=0;

    for(i=0;i<n-1;i++)
    {
        minidx=i;
        for(j=i+1;j<n;j++)
        {
            compare++;
            if(arr[minidx]>arr[j])
            {
                minidx=j;
            }
        }
        
        if(minidx!=i)
        {
            swaps++;
            swap(arr[i],arr[minidx]);
        }
        
    }

    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"Comparisons : "<<compare<<endl;
    cout<<"Swaps : "<<swaps<<endl;
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

    selectionSort(arr,n);
    }

    
}