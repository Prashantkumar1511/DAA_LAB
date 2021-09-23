#include<iostream>
using namespace std;

void countFrequency(char arr[],int n)
{
    int count[26]={0};

    for(int i=0;i<n;i++)
    {
        count[arr[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>1)
        {
            cout<<char('a'+i)<<"-"<<count[i]<<endl;
            return;
        }
    }
    cout<<"No Duplicates Present "<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        countFrequency(arr,n);
    }
}