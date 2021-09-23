#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

void jumpSearch(int arr[], int key, int n)
{
    int c = 0,found=0;
    int k = 0;
    int i = 0, end = 0;
    while (i < n)
    {
        c++;
        int p = pow(2, i + 1);
        int idx = min(p, n);
        if (key >= arr[i] && key < arr[idx])
        {
             found=1;
            end = pow(2, i + 1);
            break;
        }
        i = pow(2, i + 1);
    }
    if ( found!= 1)
    {
        cout << "Not Present " << c << endl;
        return;
    }
    else
    {
        for (int k = i; k < end; k++) //Linear searching in a range
        {
            c++;
            if (arr[k] == key)
            {
                cout << "Present " << c << endl;
                return;
            }
        }
        cout << "Not Present " << c << endl;
    }
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
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        jumpSearch(arr, key, n);
    }
}