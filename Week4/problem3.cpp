#include<iostream>
using namespace std;
void swap(int &n1, int &n2)
{
    int t = n1;
    n1 = n2;
    n2 = t;
}

int partition(int arr[], int l, int r)
{
    int i = l-1;
    int j= l;
    while(j < r)
    {
        if(arr[j] <= arr[r])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[r]);
    return i;
}

int kFindSmall(int arr[], int l, int r, int key, int n)
{
    if(l <= r)
    {
        int p = partition(arr, l, r);
        if(p == key-1)
            return arr[p];
        else if(p > key-1)
           return kFindSmall(arr, l, p-1, key, n);
        else
            return kFindSmall(arr, p+1, r, key, n);
    }
    return -1;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int key;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        cin>>key;
       int ans = kFindSmall(arr,0,(n-1),key,n);
       if(ans==-1)
        cout << "Not Present"<<endl;
       else
        cout << ans << endl;
    }
    return 0;

}