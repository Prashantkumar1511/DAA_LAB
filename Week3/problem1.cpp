#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j,compare=0,shifts=0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
       
       while (j >= 0 && arr[j] > key)
        {
            shifts++;
            compare++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        compare++;
        arr[j + 1] = key;
    }

    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"Comparisons : "<<compare<<endl;
    cout<<"Shifts : "<<shifts<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, flag = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        insertionSort(arr,n);
    }
}