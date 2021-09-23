#include<iostream>
using namespace std;

int swaps=0,compare=0;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int partition(int a[],int l,int r)
{


   int pivot=a[r];
   int i=l-1;
   for(int j=l;j<=r-1;j++)
   {
       compare++;
       if(a[j]<pivot)
       {
           i++;
           swaps++;
           swap(a[i],a[j]);
       }
   }
   swaps++;
   swap(a[i+1],a[r]);
   return (i+1);
}


void sort(int a[],int l,int r)
{
    if(l<r)
    {
        int p=partition(a,l,r);
        sort(a,l,p-1);
        sort(a,p+1,r);

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
        cin>>a[i];
    
    sort(a,0,n-1);


    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<"Comparisons : "<<compare<<endl;
    cout<<"Swaps : "<<swaps<<endl;
    }
    
}