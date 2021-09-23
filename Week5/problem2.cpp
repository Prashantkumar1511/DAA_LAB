#include <iostream>
#include <algorithm>
using namespace std;

void twoPairs(int arr[], int n,int key)
{
    int inc=0,flag=0;
    int dec=n-1;
    while(inc!=dec)
    {

        
        if((arr[inc]+arr[dec])>key)
        {
            dec--;
        }
        else if((arr[inc]+arr[dec])<key)
        {
           
            inc++;
        }
        else
        {
            flag++;
            cout<<arr[inc]<<","<<arr[dec]<<endl;
            dec--;
        }

    }
    cout<<inc<<" "<<dec<<endl;
    if(flag==0)
        cout<<"No Such Pair Exists"<<endl;
    

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int key;
        cin>>key;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        twoPairs(arr,n,key);
    }
}